var array = [1,3,4,5,6,9,6];
var length = array.length;
var positive = 0,negative =0,zero =0;
for(i =0;i<length;i++){
    if(array[i] == 0){
        zero = zero + 1;
    }
    else if(array[i] >0){
        positive = positive + 1;
    }
    else{
        negative = negative + 1;
    }
}
console.log("The number of Positive elements =",positive);
console.log("The number of Negative elements =",negative);
console.log("The number of Zero elements =",zero);