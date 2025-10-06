var sub1=56,sub2=63,sub3=91,sub4=42,sub5=76;
var sum = sub1 + sub2 + sub3 + sub4 + sub5;
var perc = sum / 5;
if(perc >= 90){
    console.log("Grade A");
}
else if(perc >= 80){
    console.log("Grade B");
}
else if(perc >= 70){
    console.log("Grade C");
}
else if(perc >= 60){
    console.log("Grade D");
}
else{
    console.log("Fail");
}