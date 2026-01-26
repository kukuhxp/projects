function toggleSidebar() {
  const sidebar = document.getElementById('sidebar');
  const overlay = document.getElementById('overlay');
  const isActive = sidebar.classList.contains('active');
  
  if (!isActive) {
      sidebar.classList.add('active');
      overlay.style.display = 'block';
    } else {
      sidebar.classList.remove('active');
      overlay.style.display = 'none';
    }
}

function closeSidebar() {
    document.getElementById('sidebar').classList.remove('active');
    document.getElementById('overlay').style.display = 'none';
}

function toggleDropdown(id) {
  const menu = document.getElementById(id);
  menu.style.display = menu.style.display === 'flex' ? 'none' : 'flex';
}

// Swipe gesture logic
let touchStartX = 0;
let touchEndX = 0;

document.addEventListener('touchstart', function(e) {
  touchStartX = e.changedTouches[0].screenX;
});

document.addEventListener('touchend', function(e) {
  touchEndX = e.changedTouches[0].screenX;
  handleGesture();
});

function handleGesture() {
  const sidebar = document.getElementById('sidebar');
  const overlay = document.getElementById('overlay');
  const isSidebarActive = sidebar.classList.contains('active');
  
  if (touchEndX - touchStartX > 70 && !isSidebarActive) {
    sidebar.classList.add('active');
    overlay.style.display = 'block';
  }
  
  if (touchStartX - touchEndX > 70 && isSidebarActive) {
    sidebar.classList.remove('active');
    overlay.style.display = 'none';
  }
}