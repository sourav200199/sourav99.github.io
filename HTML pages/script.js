let btn=document.querySelector('button');
let btn1=document.querySelector('.ab');
btn.addEventListener('click',showMsg);
btn1.addEventListener('click',inputMsg);
function showMsg(){
    alert("Welcome");
}
function inputMsg(){
    let name = prompt('Enter your name :');
    btn1.textContent = 'Name :'+name;
}
