const obj = { a: 5, b: 10, c: "hello", d: 15 };

let sum = 0;
const values = Object.values(obj);

for (let val of values) {
  if (typeof val === "number") {
    sum += val;
  }
}

console.log(sum);