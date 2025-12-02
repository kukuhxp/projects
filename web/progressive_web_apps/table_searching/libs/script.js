function escapeHtml(text) {
  return text.replace(/</g, "&lt;").replace(/>/g, "&gt;");
}

function decodeHtml(html) {
  const txt = document.createElement("textarea");
  txt.innerHTML = html;
  return txt.value;
}

function highlightWithSafeEscape(text, keyword) {
  const escapedKeyword = keyword.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
  const regex = new RegExp(`(${escapedKeyword})`, 'gi');
  const highlighted = text.replace(regex, '<span class="highlight">$1</span>');
  return highlighted
    .replace(/&/g, '&amp;')
    .replace(/</g, (m, offset, str) =>
      str.slice(offset, offset + 6) === '<span' ? '<span' : '&lt;'
    )
    .replace(/>/g, (m, offset, str) =>
      str.slice(offset - 6, offset + 1) === '</span>' ? '</span>' : '&gt;'
    );
}

function filterTable() {
  const input = document.getElementById('searchInput');
  const filter = input.value.toLowerCase();
  const rows = document.querySelectorAll('table tbody tr');
  rows.forEach(row => {
    const codeEl = row.cells[1].querySelector('code');
    const originalHtml = codeEl.dataset.original;
    const decodedText = decodeHtml(originalHtml);
    if (!filter) {
      codeEl.innerHTML = originalHtml;
      row.style.display = '';
      return;
    }
    if (decodedText.toLowerCase().includes(filter)) {
      const safeHighlighted = highlightWithSafeEscape(decodedText, filter);
      codeEl.innerHTML = safeHighlighted;
      row.style.display = '';
    } else {
      row.style.display = 'none';
    }
  });
}

// core in custom suggestions
let allSuggestions = [];
function updateSuggestions() {
  const table = document.querySelector('table');
  
  // suggestion is just showing the keyword based code element
  const cells = table.querySelectorAll('tbody tr td:nth-child(2) code');
  
  const uniqueTexts = new Set();
  cells.forEach(codeEl => {
    const text = codeEl.textContent.trim();
    if (text.length > 0) uniqueTexts.add(text);
  });

  allSuggestions = Array.from(uniqueTexts);
}

function showSuggestions() {
  const list = document.getElementById('customSuggestions');
  list.style.display = 'block';
  renderSuggestionList('');
}

function hideSuggestions() {
  // delay so user can click first
  setTimeout(() => {
    const list = document.getElementById('customSuggestions');
    list.style.display = 'none';
  }, 200);
}

function filterSuggestions() {
  const input = document.getElementById('searchInput');
  renderSuggestionList(input.value.toLowerCase());
}

function renderSuggestionList(filterText) {
  const list = document.getElementById('customSuggestions');
  list.innerHTML = '';
  if (!filterText) {
  list.style.display = 'none';
  return;
}
  const filtered = allSuggestions.filter(text =>
    text.toLowerCase().includes(filterText)
  );
  filtered.slice(0, 10).forEach(text => {
    const li = document.createElement('li');
    li.textContent = text;
    li.style.padding = '5px 10px';
    li.style.cursor = 'pointer';
    li.addEventListener('mousedown', () => {
      document.getElementById('searchInput').value = text;
      filterTable(); // langsung filter tabel
      hideSuggestions();
    });
    list.appendChild(li);
  });
  list.style.display = filtered.length ? 'block' : 'none';
}

function toggleClearButton() {
  const input = document.getElementById('searchInput');
  const clearBtn = document.getElementById('clearBtn');
  clearBtn.style.display = input.value ? 'block' : 'none';
}

function clearSearch() {
  const input = document.getElementById('searchInput');
  input.value = '';
  toggleClearButton();
  filterTable();
}

function exportCSV() {
  const headers = ['Characters', 'Name', 'Unicode (U+)', 'Decimal', 'Hex'];
  let csv = headers.map(h => `"${h}"`).join(',') + '\r\n';
  const rows = document.querySelectorAll('table tbody tr');
  rows.forEach(row => {
    const cols = row.querySelectorAll('td');
    const rowData = Array.from(cols).map(td => {
      const text = td.innerText.replace(/"/g, '""').trim(); // Escape double quotes
      return `"${text}"`; // Wrap with quotes
    });
    csv += rowData.join(',') + '\r\n';
  });
  const blob = new Blob(["\uFEFF" + csv], { type: 'text/csv;charset=utf-8;' });
  const link = document.createElement('a');
  link.href = URL.createObjectURL(blob);
  link.download = 'ascii.csv';
  document.body.appendChild(link);
  link.click();
  document.body.removeChild(link);
}

function importCSV(event) {
  const file = event.target.files[0];
  if (!file) return;
  const reader = new FileReader();
  reader.onload = function(e) {
    const lines = e.target.result.split('\n').slice(1);
    const tbody = document.querySelector('table tbody');
    tbody.innerHTML = '';
    lines.forEach(line => {
      const cells = line.split(',');
      if (cells.length === 4) {
        const row = document.createElement('tr');
        cells.forEach(cell => {
          const td = document.createElement('td');
          td.textContent = cell.replace(/;/g, ',');
          row.appendChild(td);
        });
        tbody.appendChild(row);
      }
    });
  };
  reader.readAsText(file);
}

function attachSearchEvents() {
  const input = document.getElementById('searchInput');
  input.addEventListener('input', () => {
    filterSuggestions();
    toggleClearButton();
  });
  input.addEventListener('focus', showSuggestions);
  input.addEventListener('blur', hideSuggestions);
  input.addEventListener('keyup', filterTable);
}
window.onload = () => {
  updateSuggestions();
  toggleClearButton();
  attachSearchEvents();
};
document.querySelectorAll('td:nth-child(2) code').forEach(codeEl => {
  codeEl.dataset.original = codeEl.innerHTML;
});

// usage: insert it to an element <span class="copyCode">code here</span>
document.querySelectorAll('.copyCode').forEach((el, index) => {
  const btn = document.createElement('span');
  btn.className = 'copy-icon';
  btn.textContent = '📋';
  btn.title = 'Salin kode';
  btn.addEventListener('click', () => {
    navigator.clipboard.writeText(el.textContent).then(() => {
      alert(`Disalin: ${el.textContent}`);
    });
  });
  el.parentNode.appendChild(btn);
});