const containerel=document.getElementById("container")
containerel.innerHTML="<button onclick='buy()'>"+"Buy!"+"</button>"
function buy(){
    containerel.innerHTML+="<p>thanks for buying, have a great day!</p>"
}