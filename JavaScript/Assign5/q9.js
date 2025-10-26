var obj = {name: 'Alice'};
Object.freeze(obj);
obj.name = 'Bob';
obj.age = 25;
console.log(obj);