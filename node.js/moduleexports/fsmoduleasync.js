const {readFile,writeFile}=require('fs')
const first=readFile('node.js/moduleexports/pathmodule/first.txt','utf8',(err,result)=>{
    if(err){
        console.log(err)
        return
    }
    const first=result
    readFile('node.js/moduleexorts/pathmodule/second.txt','utf8',(err,result)=>{
        if(err){
            console.log(err)
            return
        }
        const second=result
        writeFile('node.js/moduleexports/pathmodule/result-async',`here 
            is the result : ${first},${second}
            `,(err,result)=>{
            if(err){
                console.log(err)
                return
            }
            console.log(result)
        })
    })
})