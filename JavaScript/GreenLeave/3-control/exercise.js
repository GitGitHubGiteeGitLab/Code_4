//1
let i = 1, sum = 0
while(i <= 100){
    sum += i
    i++
}
document.write(sum)
document.write("<br>")

for(i = 1, sum = 0; i <= 100; i++){
    sum += i
}
document.write(sum)
document.write("<br>")

i = 1, sum = 0
do{
    sum += i
    i++
}while(i <= 100)
document.write(sum)
document.write("<br>")

//2
for(i = 0; i < 7; i++){
    if(i <= 3){
        let j = 0
        for(j = 0; j < Math.ceil(7 / 2) - (i + 1); j++){
            document.write("-")
        }
        for(j = 0; j < 2 * i + 1; j++){
            document.write("*")
        }
        document.write("<br>")
    }else{
       let j = 0
       for(j = 0 ; j < i - Math.floor( 7 / 2); j++){
            document.write("-")
       }
       for(j = 0; j < 7 - (i - Math.floor(7 / 2)) * 2; j++){
            document.write("*")
       }
       document.write("<br>")
    }
}

//3
i = 1
let j = 1
while(i <= 9){
    for(j = 1; j <= i; j++){
        document.write(j + " * " + i + " = " + j * i + "&nbsp&nbsp&nbsp&nbsp")
    }
    document.write("<br>")
    i++    
}
