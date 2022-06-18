let num1=5
let num2=1
document.getElementById("num1-el").textContent=num1
document.getElementById("num2-el").textContent=num2
let sumEl=document.getElementById("sum-el")
function add(){
    let num3=num1+num2
    sumEl.textContent=num3
}
function subtract(){
    let num3=num1-num2
    sumEl.textContent=num3
}
function multiply(){
    let num3=num1*num2
    sumEl.textContent=num3
}
function divide(){
    let num3=num1/num2
    sumEl.textContent=num3
}