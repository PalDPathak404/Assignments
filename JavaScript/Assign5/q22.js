const obj = { a: 1, b: 2 };
const swapped = {};

for (let key in obj) {
  swapped[obj[key]] = key;
}

console.log(swapped);