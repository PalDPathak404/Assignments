var array = [1,2,3,4,5,6,7,8,9,10];
for (var i = array.length - 1; i >= 0; i--) {
    if (array[i] % 2 === 0) {
        array.splice(i, 1);
    }
}
console.log(array); 