const accordions = document.querySelectorAll(".accordion");
accordions.forEach(btn => {
  btn.addEventListener("click", function () {
    // Panel object
    const panel = this.nextElementSibling;
    
    const isOpen = panel.classList.contains("open");// False
    if (isOpen) {
      panel.style.maxHeight = null;
      panel.classList.remove("open");
    } else {
      panel.style.maxHeight = panel.scrollHeight + "px";
      panel.classList.add("open");
    }
  });
});