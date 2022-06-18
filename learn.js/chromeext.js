let myleads=[] 

const inputel=document.getElementById("input-el")
const inputbtn=document.getElementById("input-btn")
const ulel=document.getElementById("ul-el")
let deletebtn=document.getElementById("delete-btn")
const tabbtn=document.getElementById("tab-btn")

const leadsfromlocalstorage=JSON.parse(localStorage.getItem("myleads"))
if(leadsfromlocalstorage){
    myleads=leadsfromlocalstorage
    renderleads(myleads)   
}
const tabs=[{url:"https://facebook.com"}]

tabbtn.addEventListener("click",function(){
    renderleads(tabs[0].url)
})

function renderleads(leads){
    let listitems=""    
    
    for(let i=0;i<leads.length;i++){
        listitems+=`
            <li>
                <a href='${leads[i]}' target='_blank'>
                ${leads[i]}
                </a>
            </li>
        ` 
        // const li=document.createElement("li")
        // li.textContent=myleads[i]
        // li.append(li)
    }
    ulel.innerHTML=listitems 
    }

deletebtn.addEventListener("dblclick",function(){
    localStorage.clear()
    myleads=[]
    renderleads(myleads)
})

inputbtn.addEventListener("click",function(){
    myleads.push(inputel.value)
    inputel.value=""
    localStorage.setItem("myleads",JSON.stringify(myleads))
    renderleads(myleads)
})

