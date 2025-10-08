var array = [1,3,4,5,6,9,6];
var length = array.length;
var even=0 ,odd=0;
for(i =0;i<length;i++){
        if(array[i] % 2 == 0){
            even = even + 1;
        }
    else{
        odd = odd + 1;
    }
}
console.log("The Even elements =",even);
console.log("The Odd elements =",odd);