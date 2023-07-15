function login(){
    var password = prompt("Masukan Kata Sandi :");
    if (password == "Sandi") {
        window.location.href = 'resultR.html';
    } else {
        alert("Kata Sandi Salah!");
    }
}