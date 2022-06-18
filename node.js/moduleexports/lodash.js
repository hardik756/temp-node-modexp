const hii=require('lodash')
const items=[1,[2,[3,[4]]]]
const newitems=hii.flattenDeep(items)
console.log(newitems)
