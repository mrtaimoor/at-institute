function toggleMenu(id) {
    console.log(id);
    let nav = document.getElementById("main-nav");
    if (id === 1) {
      nav.style.left = "0%";
    } else {
      nav.style.left = "-100%";
    }
  }
  