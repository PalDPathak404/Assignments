var str = "abc";
var targetLength = 10;
var repeatCount = Math.ceil(targetLength / str.length);
var repeated = str.repeat(repeatCount);
var result = repeated.slice(0, targetLength);
console.log(result);
//dobut onece again