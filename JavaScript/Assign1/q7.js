var perc = 85,income = 400000;
if(perc >= 85 && income < 300000){
    console.log("Full Scholarship");
}
else if(perc >= 70 && income < 500000){
    console.log("Half Scholarship");
}
else{
    console.log("Not eligible for Scholarship");
}