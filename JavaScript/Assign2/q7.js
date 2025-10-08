var array = [1, 3, 4, 5, 6, 9, 6];
var length = array.length;
var reverse = [];

for (var i = 0; i < length; i++) {
  reverse[i] = array[length - 1 - i];
}

console.log("The Reverse elements =", reverse);