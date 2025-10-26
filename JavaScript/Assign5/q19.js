const obj = { a: 1, b: 2, c: 3 };

let allNumbers = true;
for (let key in obj) {
  if (typeof obj[key] !== "number") {
    allNumbers = false;
    break;
  }
}
console.log(allNumbers);