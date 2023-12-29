day = 2
if(day == 2){
    document.write('weekday2')
}else{
    document.write('not weekday2')
}

switch(day){
    case 1:
        document.write('weekday1')
        break
    case 2:
        document.write('weekday2')
        break
    case 3:
        document.write('weekday3')
        break
    case 4:
        document.write('weekday4')
    case 5:
        document.write('weekday5')
        break
    case 6:
        document.write('weekday6')
        break
    case 7:
        document.write('weekday7')
        break
    default:
        document.write('not weekday')
        break
}
document.write('<br>')
document.write('第二行')

let i = 0
while(i < 5){
    document.write(i + '<br>')
    i++
}

document.write('<br>')

i = 0
do{
    document.write(i + '<br>')
    i++
}while(i < 5)

document.write('<br>')

for(let i = 0; i < 5; i++){
    document.write(i + '<br>')
}

document.write('<br>')

for(let i = 2; i < 5; i++){
    let str = "<p style='font-size:" + i * 5 + "px'>总有刁民想害朕</p>"
    document.write(str) 
}

let n = 3.14
if(parseInt(n.toString) == parseFloat(n.toString)){
    document.write('n is int <br>')
}else{
    document.write('n is float <br>')
}
document.write('hello')
document.write('<br>')

function cal(n){
    let sum = 0
    while(n > 0){
        let i = n % 10 
        let j = i * i * i
        sum += j
        n = Math.floor(n / 10)
    }
    return sum
}

let str = ''
let flag = 1
for(let i = 100; i < 1000; i++){
    
    if( i == cal(i)){
        if(flag == 0){
            str += ','
        }
        str += i
        flag = 0
    }
}
document.write(str)