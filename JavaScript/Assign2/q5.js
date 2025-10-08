var array = [1,3,4,5,6,9,6];
var length = array.length;
var min = array[0];
for(i =0;i<length;i++){
        if(min > array[i]){
            min = array[i];
        }
    
}
console.log("The Maximum one of all elements =",min);