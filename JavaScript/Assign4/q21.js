var str = "Hello World";
console.log(str.replace(/[aeiouAEIOU]/g, ""));

// Alternative method 1: Using replaceAll() (ES2021+)
// var result2 = str.replaceAll(/[aeiouAEIOU]/g, "");
// console.log(result2);

// Alternative method 2: Using filter with split
// var result3 = str.split("").filter(char => !/[aeiouAEIOU]/.test(char)).join("");
// console.log(result3);

// Alternative method 3: Using for loop
// var result4 = "";
// for (var i = 0; i < str.length; i++) {
//     if (!/[aeiouAEIOU]/.test(str[i])) {
//         result4 += str[i];
//     }
// }
// console.log(result4);
//double check this one