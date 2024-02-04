function goBack(){
    window.history.back();
}
function menubars() {
    var x = document.getElementById("linked");
    if (x.style.display === "flex") {
      x.style.display = "none";
    } else {
      x.style.display = "flex";
    }
  }