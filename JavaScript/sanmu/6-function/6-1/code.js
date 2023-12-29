function Welcome(){
    console.log("hello everyone");
    console.log("welcome to js");
}

Welcome()//function call

function loop(){
    for(let i = 0; i < 9; i++){
        for(let j = 0; j < 9; j++){
            console.log(i+ '-' +j);
        }
    }
}

//函数可以是对象的方法 
let obj = {
    loop(){
        for(let i = 0; i < 3; i++){
            for(let j = 0; j < 3; j++){
                console.log(i+ '-' +j);
            }
        }
    },

    Welcome: function(){
    console.log("welcome to js & node.js");

    },
}
obj.loop()
obj.Welcome()