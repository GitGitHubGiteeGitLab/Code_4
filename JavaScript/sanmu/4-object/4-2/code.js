let a = 10
let b = a
b = 20

console.log("a = ", a, "\nb = ", b)

let boy1 = {
    name: "xiaoming",
    gender: "man",
}

console.log(boy1)

let boy2 = boy1
boy2.name = 'zhangsan'
console.log(boy1)

let littleBoy = {
    name: 'littleBoy',
    gender: 'male',
    parent: {
        mom: 'aaa',
        dad: 'bbb'
    }
}

let smallBoy = {
    name: littleBoy.name,
    gender: littleBoy.gender,
    parent: littleBoy.parent,
}

littleBoy.parent.mom = 'big'
console.log(smallBoy.parent)

console.log(typeof(null))

let miniBoy = {
    name: littleBoy.name,
    gender: littleBoy.gender,
    parent: {
        mom: littleBoy.parent.mom,
        dad: littleBoy.parent.dad,
    }
}
littleBoy.parent.mom = 'bigbig'
console.log(miniBoy.parent)
