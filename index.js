// var otp=Math.floor(Math.random() * 9000)
// console.log(otp);
// const bcrypt=require('bcrypt');
const arr=[
    {id:1,name:"satish",age:21},
    {id:2,name:"baba",age:20},
    {id:3,name:"vinay",age:20},
    {id:4,name:"tushar",age:20},
    {id:5,name:"dharmendra",age:24},
    {id:6,name:"lucky",age:24}
];
var count = 0;
var data=[];
arr.map((item,index)=>{ 
 data.push(`${item.age}:`)
})
console.log(data);

