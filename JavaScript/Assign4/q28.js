var str = "hello world";
var words = str.split(" ");
console.log(words.map(word => word.charAt(0).toUpperCase() + word.slice(1)).join(" "));