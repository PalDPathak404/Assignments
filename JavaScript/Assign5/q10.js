var obj = {name: 'Bob', age: 30};
Object.seal(obj);
obj.city = 'Mumbai';
obj.name = 'Alice';
console.log(obj);