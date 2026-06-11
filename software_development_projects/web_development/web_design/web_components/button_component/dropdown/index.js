function toggleDropdown() {document.getElementById("dropdownMenu").classList.toggle("show");}
window.addEventListener("click", function (e) {
  if (!e.target.closest('.dropdown')) {
    const menu = document.getElementById("dropdownMenu");
    if (menu.classList.contains('show')) {
      menu.classList.remove('show');
    }
  }
});