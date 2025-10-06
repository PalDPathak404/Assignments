var income = 600000;
var tax = 0;

if (income <= 250000) {
  tax = 0;
} 
else if (income <= 500000) {
  tax = (income - 250000) * 0.05;
} 
else if (income <= 1000000) {
  tax = (250000 * 0.05) + (income - 500000) * 0.20;
} 
else {
  tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
}

console.log("Tax: ₹" + tax);
//inshort you need to just adjust the tax brackets according to the income range.when you have a fixed range.