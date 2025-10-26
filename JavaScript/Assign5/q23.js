const obj = { a: 10, b: 20, c: 15 };

let maxKey = null;
let maxValue = -Infinity;

for (let key in obj) {
  if (obj[key] > maxValue) {
    maxValue = obj[key];
    maxKey = key;
  }
}
console.log(maxKey);