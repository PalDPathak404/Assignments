const arr = [{ id: 1 }, { id: 2 }];

const result = {};
for (let item of arr) {
  result[item.id] = item;
}

console.log(result); 