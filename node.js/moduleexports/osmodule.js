const user=require('os')
console.log(user.userInfo)
console.log(`system uptime:${user.uptime()}`)
const currentos={
    name:user.type(),
    release:user.release(),
    totalMem:user.totalmem(),
    freecheck:user.platform(),
}
console.log(currentos)
