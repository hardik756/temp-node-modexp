let myleads=`["www.google.com"]`
myleads=JSON.parse(myleads)
myleads.push("www.wikipidea.com")
myleads=JSON.stringify(myleads)
console.log(myleads)
console.log(typeof myleads)