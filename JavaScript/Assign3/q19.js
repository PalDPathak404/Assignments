var array = [10,20,30,40,50];
var temp = array[0];
array[0] = array[array.length - 1];
array[array.length - 1] = temp;
console.log(array);

// var array = [10, 20, 30, 40, 50];
// [array[0], array[array.length - 1]] = [array[array.length - 1], array[0]];
// console.log(array); // Output: [50, 20, 30, 40, 10]

// var array = [10, 20, 30, 40, 50];
// var first = array.splice(0, 1, array[array.length - 1])[0];
// array[array.length - 1] = first;
// console.log(array); // Output: [50, 20, 30, 40, 10]
