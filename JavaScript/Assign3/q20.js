var array = [10,20,30,40,50,60];
var newArray = [];
for(var i = 0; i < array.length; i++){
    if(i % 2 == 0){
        newArray.push(array[i]);
    }
}
console.log(newArray);
// var array = [10, 20, 30, 40, 50, 60];
// var newArray = array.filter((_, idx) => idx % 2 === 0);
// console.log(newArray); // Output: [10, 30, 50]
