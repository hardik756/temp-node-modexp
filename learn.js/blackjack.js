let sum=0
let hasblackjack=false
let isalive=false
let message=""
let cards=[]

// let messageEl=document.getElementById("message-el")
// let sumel=document.getElementById("sum-el")
let messageEl=document.querySelector("#message-el")
let sumel=document.querySelector("#sum-el")
let cardel=document.getElementById("card-el")
let player={
    name:"hardik",
    chips:145
}
let playerel=document.getElementById("player-el")
playerel.textContent=player.name+" :$"+player.chips

function newcard(){
    if(isalive && sum<21){
    let newcard=getrandomcard()
    sum+=newcard
    cards.push(newcard)
    rendergame()
    }
    else if(sum===0){
        messageEl.textContent="Please start the game "
    }
    else{
        messageEl.textContent="Game over!Wanna play next round ?"
    }
}
function startgame(){
    isalive=true
    let firstcard=getrandomcard()
    let secondcard=getrandomcard()
    sum=firstcard+secondcard
    cards=[firstcard,secondcard]
    rendergame()
}
function getrandomcard(){
    let randomnumber = Math.floor(Math.random()*13+1)
    if(randomnumber==11 || randomnumber==12 || randomnumber==13){
        return 10
    }
    else if(randomnumber== 1){
        return 11
    }
    else{
        return randomnumber
    }
}
function rendergame(){
    cardel.textContent="cards: "
    for(let i=0;i<cards.length;i++){
        cardel.textContent+=cards[i]+" "        
    }
    
    sumel.textContent="Sum: "+sum;
    if(sum<21){
        message="do you want to pick a new card?"
    }
    else if(sum===21){
        message="wohoo! you won the match"
        hasblackjack=true
    }
    else{
        message="sorry, you are out of game"
        isalive=false
    }
    messageEl.textContent= message    
}
