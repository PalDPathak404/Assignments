const obj = { a: 1, b: 2, c: 3 };

for (let key in obj) {
  delete obj[key];
}
console.log(obj); 