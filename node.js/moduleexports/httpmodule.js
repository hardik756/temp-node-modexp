const http=require('http')
const server=http.createServer((req,res)=>{
   if(req.url==='/'){
    res.end('welcome to our homepage again')
   }
   if(req.url==='/about'){
    res.end('hardik_s first http page') 
   }
   res.end(`
   <h1>Oops</h1>
   <p>sorry! didn't find the page you are looking for</p>
   <a href="/">homepage</a>
   `)
})
server.listen(3410)