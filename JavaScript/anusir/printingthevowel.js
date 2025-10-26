//wrong
var name = "hAlLuNiCaTiOn CaUsEs MeNtAl TrAuMaS";
var countvowel = 0;
var countconso = 0;
for(i =0 ; i<name.length;i++){
    if(name[i] == "A" || name[i] == "u" || name[i] == "i" || name[i] == "O" || name[i] == "a" || name[i] == "E" || name[i] == "e" ){
        console.log(name[i].toLowerCase());
        countvowel++;
    }
    else{
        console.log(name[i].toUpperCase());
        countconso++;
    }
}
console.log(countvowel , countconso);
//right usimg the slice to break the words

let string = "Welcome to the jungle";
console.log(string.at(3));
console.log(string.charAt(3));
console.log(string.slice(3, 6));
console.log(string.substring(3, 6));
console.log(string.split(" ")); 
countconso = 0;
countvowel = 0;

    