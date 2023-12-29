console.log(3 ** 3)

let obj = {
    name: 'abc',
    age: 18,
    child: {
        name: 'def',
        age: 9,
    },
}

let objcopy1 ={
    ...obj,
}

let objcopy2 = obj
objcopy1.child.name = 'ghi'
console.log('obj = ', obj)
console.log('objcopy1 = ' , objcopy1 )
console.log('obj === objcopy1 ', obj === objcopy1);
console.log('obj === objcopy2 ', obj === objcopy2);

console.log('3.0 === 3', 3.0 === 3)
console.log("'3' === 3 ",'3' === 3)
console.log(typeof(NaN))

console.log(parseInt('123'))
console.log(parseInt('123s4'))
console.log(parseInt('s123'))

console.log(parseFloat('123.456'));
console.log(parseFloat('123.456.789'));
console.log(parseFloat('s123.456'));
