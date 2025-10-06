var units = 777;
var bill = 0;
if(units <= 100){
    bill = units * 5;
}
else if(units <= 300){
    bill = (100 * 5) + (units - 100)*7 ;
}
else{
    bill = (100 * 5) + (units - 300)* 10 + (200 * 7 );
}
console.log("Total Electricity Bill = ₹" + bill);