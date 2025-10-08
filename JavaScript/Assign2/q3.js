var array = [1,3,4,5,6,9,6];
var length = array.length;
var sum =0,avg;
for(i =0;i<length;i++){
    sum = sum + array[i];
}
avg = sum / length;
console.log("The Average of all elements =",avg);