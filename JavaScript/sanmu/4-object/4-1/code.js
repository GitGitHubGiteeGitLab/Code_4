let baby = {
    name: 'wawa',
    age: 3,
    parent: {
        mom: 'xx',
        dad: 'xx',
    },
}

let babyFake = {
    name: baby.name,
    age: baby.age,
    parent: baby.parent,
}
console.log(babyFake)


//describe three objects

let apple = {
    color: 'red',
    shape: 'round',
    taste: 'sweet',
}
console.log(apple)

let car = {
    brand: 'Toyota',
    model: 'Camry',
    year: 2022,
}
console.log(car)

let book = {
    title: 'The Great Gatsby',
    author: 'F. Scott Fitzgerald',
    pages: 180,
}
console.log(book)

delete book.pages
console.log(book)
console.log('title' in book)