var array = [1,3,4,5,6,9,6];
var length = array.length;
var limit = 3;
for(i =0;i<length;i++){
   if(array[i] > limit){
       console.log("Greater elements =",array[i]);
   }
}