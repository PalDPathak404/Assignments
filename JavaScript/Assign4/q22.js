var str = "OpenAI";
console.log(str.split("").reverse().join(""));
//think again and do it without using reverse()

// Alternative method 1: Using for loop (backwards)
// var reversed2 = "";
// for (var i = str.length - 1; i >= 0; i--) {
//     reversed2 += str[i];
// }
// console.log(reversed2);

// Alternative method 2: Using recursion
// function reverseString(s) {
//     if (s.length <= 1) return s;
//     return s[s.length - 1] + reverseString(s.slice(0, -1));
// }
// console.log(reverseString(str));

// Alternative method 3: Using reduce()
// var reversed3 = str.split("").reduce((acc, char) => char + acc, "");
// console.log(reversed3);

// Alternative method 4: Using while loop
// var reversed4 = "";
// var i = str.length - 1;
// while (i >= 0) {
//     reversed4 += str[i];
//     i--;
// }
// console.log(reversed4);