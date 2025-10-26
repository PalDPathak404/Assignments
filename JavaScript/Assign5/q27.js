const obj = { a: 2, b: "hi", c: 5 };

for (let key in obj) {
  if (typeof obj[key] === "number") {
    obj[key] *= 2;
  }
}   
console.log(obj); 