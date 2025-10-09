const quizData = [
  // ---------------- UNIT 1 : Basics ----------------
  {question:"Who invented the C programming language?",options:["Bjarne Stroustrup","Dennis Ritchie","Ken Thompson","James Gosling"],answer:"Dennis Ritchie"},
  {question:"C language was developed in which year?",options:["1970","1972","1980","1985"],answer:"1972"},
  {question:"C was developed at which company?",options:["IBM","Microsoft","AT&T Bell Labs","Intel"],answer:"AT&T Bell Labs"},
  {question:"Which of these is a correct C file extension?",options:[".txt",".cpp",".c",".java"],answer:".c"},
  {question:"Which of the following is a valid variable name?",options:["1value","_num","num-1","int"],answer:"_num"},
  {question:"Which keyword is used to define constants?",options:["constant","define","const","fixed"],answer:"const"},
  {question:"Which function is used to print output on screen?",options:["cin>>","print()","printf()","display()"],answer:"printf()"},
  {question:"Which function is used to take input?",options:["scanf()","input()","cin>>","get()"],answer:"scanf()"},
  {question:"Which header file is required for printf()?",options:["<stdio.h>","<string.h>","<conio.h>","<math.h>"],answer:"<stdio.h>"},
  {question:"Which character terminates each statement?",options:[".",";",":",","],answer:";"},
  {question:"C is a ___ level language.",options:["High","Low","Middle","Machine"],answer:"Middle"},
  {question:"Which escape sequence is used for new line?",options:["/n","\\n","n/","\\t"],answer:"\\n"},
  {question:"What is the correct syntax to start main function?",options:["main()","int main()","void main()","Main()"],answer:"int main()"},
  {question:"Which symbol is used to get address of variable?",options:["@","&","*","%"],answer:"&"},
  {question:"What will printf(\"%d\", 5>2) print?",options:["true","false","1","0"],answer:"1"},
  {question:"What does sizeof(int) return (on 32-bit system)?",options:["2","4","8","1"],answer:"4"},
  {question:"Which of these is NOT a keyword?",options:["while","break","repeat","auto"],answer:"repeat"},
  {question:"C language is primarily used for:",options:["Web dev","System programming","AI","Game design"],answer:"System programming"},
  {question:"Which of these is a preprocessor directive?",options:["#include","include()","import","define()"],answer:"#include"},
  {question:"What is the output of printf(\"Hello\\nWorld\"); ?",options:["Hello World","Hello\\nWorld","Hello↵World","Error"],answer:"Hello↵World"},

  // ---------------- UNIT 2 : Operators & Decision Making ----------------
  {question:"Which operator has the highest precedence?",options:["++","*","=","&&"],answer:"++"},
  {question:"What is the result of 5%2?",options:["1","2.5","2","0.5"],answer:"1"},
  {question:"Which of these is a logical operator?",options:["&","&&","|","%"],answer:"&&"},
  {question:"Which of the following is NOT a relational operator?",options:["==","!=","+=","<="],answer:"+="},
  {question:"The output type of a relational expression is:",options:["int","float","bool","char"],answer:"int"},
  {question:"Which operator is used for conditional evaluation?",options:["?:","if","if-else","??"],answer:"?:"},
  {question:"What is result of (3>2)&&(5<7)?",options:["true","false","1","0"],answer:"1"},
  {question:"Which statement executes one block among many choices?",options:["if","switch","for","while"],answer:"switch"},
  {question:"The default case in switch is:",options:["Optional","Mandatory","Not allowed","Error"],answer:"Optional"},
  {question:"Which keyword ends a case in switch?",options:["stop","exit","break","return"],answer:"break"},
  {question:"Which loop checks condition first?",options:["while","do-while","both","none"],answer:"while"},
  {question:"Which keyword skips current iteration?",options:["skip","continue","next","goto"],answer:"continue"},
  {question:"What is value of expression (5>10)?",options:["0","1","true","error"],answer:"0"},
  {question:"Which operator is used for bitwise AND?",options:["&&","&","||","|"],answer:"&"},
  {question:"What will printf(\"%d\", !0); output?",options:["1","0","true","false"],answer:"1"},
  {question:"Which of the following is unary operator?",options:["+","*","++","&&"],answer:"++"},
  {question:"Which of the following is assignment operator?",options:["==","+=","!=","&&"],answer:"+="},
  {question:"Which operator is used for OR operation?",options:["||","|","&&","&"],answer:"||"},
  {question:"In C, else if ladder is used for:",options:["loops","multiple decisions","arrays","functions"],answer:"multiple decisions"},
  {question:"Which keyword transfers control to labeled statement?",options:["goto","jump","label","case"],answer:"goto"},

  // ---------------- UNIT 3 : Loops & Functions ----------------
  {question:"How many times will for(i=0;i<3;i++) run?",options:["2","3","4","infinite"],answer:"3"},
  {question:"What is entry-controlled loop?",options:["while","do-while","both for and while","none"],answer:"both for and while"},
  {question:"Which keyword is used to define a function?",options:["def","function","void/int/etc.","declare"],answer:"void/int/etc."},
  {question:"Which keyword returns control from function?",options:["break","stop","return","exit"],answer:"return"},
  {question:"Main function returns which data type?",options:["void","int","char","float"],answer:"int"},
  {question:"Functions in C are called by:",options:["value","reference","both","neither"],answer:"value"},
  {question:"Recursive function is one that:",options:["calls itself","loops forever","returns void","calls main()"],answer:"calls itself"},
  {question:"Local variables are created:",options:["inside function","outside function","globally","statically"],answer:"inside function"},
  {question:"Global variables are accessible:",options:["within file","within block","entire program","not allowed"],answer:"entire program"},
  {question:"Static variable retains value:",options:["only once","after each call","never","until reboot"],answer:"after each call"},
  {question:"Default return type of C function is:",options:["void","int","float","none"],answer:"int"},
  {question:"Keyword used to declare external function:",options:["extern","static","auto","register"],answer:"extern"},
  {question:"Function prototype gives:",options:["definition","declaration","implementation","output"],answer:"declaration"},
  {question:"Is main() recursive?",options:["Yes","No","Sometimes","Never"],answer:"Yes"},
  {question:"Parameter passing in C is:",options:["call by reference","call by value","by pointer","both"],answer:"call by value"},
  {question:"What happens if function has no return type?",options:["void assumed","int assumed","error","none"],answer:"int assumed"},
  {question:"What is base condition in recursion?",options:["stopping point","starting value","loop count","none"],answer:"stopping point"},
  {question:"Which keyword allocates memory dynamically?",options:["malloc","define","static","int"],answer:"malloc"},
  {question:"Which keyword frees dynamic memory?",options:["release","delete","free","dispose"],answer:"free"},
  {question:"Header file for malloc()?",options:["<string.h>","<stdlib.h>","<stdio.h>","<memory.h>"],answer:"<stdlib.h>"},
  
  // ---------------- UNIT 4 : Arrays & Strings ----------------
  {question:"Which syntax declares an integer array of 10 elements?",options:["int arr[10];","arr int[10];","int arr();","array int arr[10];"],answer:"int arr[10];"},
  {question:"Array indexing in C starts from:",options:["0","1","-1","depends"],answer:"0"},
  {question:"Size of char array char a[5] is:",options:["4","5","6","0"],answer:"5"},
  {question:"Which header file supports strcpy()?",options:["<string.h>","<stdio.h>","<stdlib.h>","<memory.h>"],answer:"<string.h>"},
  {question:"Which function is used to get length of string?",options:["strlen()","size()","length()","count()"],answer:"strlen()"},
  {question:"In array a[5], valid indices are:",options:["1-5","0-5","0-4","1-4"],answer:"0-4"},
  {question:"Which function concatenates two strings?",options:["strcat()","combine()","append()","merge()"],answer:"strcat()"},
  {question:"A two-dimensional array is also known as:",options:["table","matrix","grid","all"],answer:"matrix"},
  {question:"Which character marks end of string?",options:["\\0","null","end","none"],answer:"\\0"},
  {question:"Array elements are stored:",options:["Sequentially","Randomly","In tree","By key"],answer:"Sequentially"},

  // ---------------- UNIT 5 : Pointers & Misc (51-100) ----------------
  {question:"Pointer variable stores:",options:["value","address","string","keyword"],answer:"address"},
  {question:"Which operator gives value at address?",options:["*","&","@","%"],answer:"*"},
  {question:"Which operator gives address of variable?",options:["@","*","&","%"],answer:"&"},
  {question:"NULL pointer means:",options:["points to 0","invalid address","no value","all"],answer:"all"},
  {question:"Size of pointer on 64-bit system?",options:["4 bytes","8 bytes","2 bytes","depends"],answer:"8 bytes"},
  {question:"Can a pointer store address of another pointer?",options:["Yes","No","Sometimes","Never"],answer:"Yes"},
  {question:"What is pointer to pointer?",options:["**ptr","*ptr*","ptr**","&*ptr"],answer:"**ptr"},
  {question:"Which operator is used for structure member via pointer?",options:[".","->","&",".*"],answer:"->"},
  {question:"Pointer arithmetic is valid only for:",options:["int","char","float","array elements"],answer:"array elements"},
  {question:"What happens if you dereference NULL pointer?",options:["crash","returns 0","compiles fine","infinite loop"],answer:"crash"},
  {question:"Which keyword allocates block of memory?",options:["malloc","printf","define","sizeof"],answer:"malloc"},
  {question:"Which function releases allocated memory?",options:["delete","free","remove","dispose"],answer:"free"},
  {question:"Pointer to array is declared as:",options:["int (*p)[10];","int *p[10];","int p[];","int *p;"],answer:"int (*p)[10];"},
  {question:"What will printf(\"%p\", &a) print?",options:["Address of a","Value of a","Error","Pointer size"],answer:"Address of a"},
  {question:"Pointer that points to freed memory is called:",options:["Dangling pointer","Void pointer","Null pointer","Wild pointer"],answer:"Dangling pointer"},
  {question:"A void pointer can store address of:",options:["int","float","char","any type"],answer:"any type"},
  {question:"Dynamic memory allocation functions return:",options:["value","address","void","none"],answer:"address"},
  {question:"Which keyword is used for macros?",options:["define","macro","def","const"],answer:"define"},
  {question:"What is result of sizeof('A')?",options:["1","2","4","depends"],answer:"1"},
  {question:"What is result of sizeof(\"A\")?",options:["1","2","4","depends"],answer:"2"},
  {question:"Which preprocessor directive prevents multiple inclusion?",options:["#ifndef","#define once","#pragma once","#endif"],answer:"#ifndef"},
  {question:"Which header file includes math functions?",options:["<math.h>","<stdlib.h>","<stdio.h>","<string.h>"],answer:"<math.h>"},
  {question:"What is value of EOF constant?",options:["0","-1","1","Depends"],answer:"-1"},
  {question:"Which keyword is used to exit from loop?",options:["stop","break","exit","end"],answer:"break"},
  {question:"Which statement jumps to labeled section?",options:["goto","label","switch","jump"],answer:"goto"},
  {question:"A structure is:",options:["collection of diff types","collection of same types","array","loop"],answer:"collection of diff types"},
  {question:"Union in C stores:",options:["all members separately","one member at a time","all at once","none"],answer:"one member at a time"},
  {question:"Which keyword defines structure?",options:["struct","structure","define","record"],answer:"struct"},
  {question:"sizeof(struct) depends on:",options:["members","alignment","compiler","all"],answer:"all"},
  {question:"Can structure contain pointer?",options:["Yes","No","Sometimes","Never"],answer:"Yes"},
  {question:"Which function copies memory block?",options:["memcpy()","copy()","assign()","dup()"],answer:"memcpy()"},
  {question:"Enum is used for:",options:["defining constants","loops","arrays","files"],answer:"defining constants"},
  {question:"What is value of first enum element by default?",options:["0","1","-1","random"],answer:"0"},
  {question:"What is file pointer type?",options:["FILE*","int*","char*","void*"],answer:"FILE*"},
  {question:"Which function opens a file?",options:["open()","fopen()","file()","create()"],answer:"fopen()"},
  {question:"Which function closes file?",options:["fclose()","close()","endfile()","delete()"],answer:"fclose()"},
  {question:"Which function reads formatted data?",options:["scanf()","fscanf()","gets()","read()"],answer:"fscanf()"},
  {question:"Which function writes formatted data?",options:["fprintf()","write()","put()","printf()"],answer:"fprintf()"},
  {question:"Which file mode overwrites existing content?",options:["w","a","r","rw"],answer:"w"},
  {question:"Which header defines FILE?",options:["<stdio.h>","<stdlib.h>","<file.h>","<string.h>"],answer:"<stdio.h>"},
  {question:"EOF is returned by:",options:["fgetc()","printf()","scanf()","fprintf()"],answer:"fgetc()"},
  {question:"Which operator accesses structure member?",options:[".","->","*","&"],answer:"."},
  {question:"Pointer initialized randomly is:",options:["Wild pointer","Null pointer","Dangling pointer","Constant"],answer:"Wild pointer"},
  {question:"Which keyword is used to create macro constant?",options:["#define","macro","#macro","constant"],answer:"#define"},
  {question:"Which header file includes memory functions?",options:["<stdlib.h>","<stdio.h>","<memory.h>","<string.h>"],answer:"<stdlib.h>"},
  {question:"Function pointer syntax is:",options:["int (*fptr)(int)","int fptr(int)","int *fptr(int)","(*fptr)int"],answer:"int (*fptr)(int)"},
  {question:"What will sizeof(void) return?",options:["0","1","2","Error"],answer:"Error"},
  {question:"Which operator cannot be overloaded in C?",options:["++","+=",".","*"],answer:"."},
  {question:"What is default storage class of local variable?",options:["auto","static","register","extern"],answer:"auto"},
  {question:"Which storage class keeps variable value across calls?",options:["auto","static","extern","register"],answer:"static"},
  {question:"Which function moves file pointer to beginning?",options:["rewind()","reset()","fseek()","start()"],answer:"rewind()"},
  {question:"Which function sets position in file?",options:["fseek()","set()","goto()","move()"],answer:"fseek()"},
  {question:"What is return type of main()?",options:["int","void","none","depends"],answer:"int"},
  {question:"What is maximum length of C identifier?",options:["31","32","64","128"],answer:"31"},
  {question:"Which operator checks size of data type?",options:["length","sizeof","size","measure"],answer:"sizeof"}
];

let currentQuestion = 0;
let score = 0;

const questionText = document.getElementById("question-text");
const optionsContainer = document.getElementById("options");
const nextBtn = document.getElementById("next-btn");
const scoreContainer = document.getElementById("score-container");
const scoreDisplay = document.getElementById("score");
const restartBtn = document.getElementById("restart-btn");

function loadQuestion() {
  const q = quizData[currentQuestion];
  questionText.textContent = `${currentQuestion + 1}. ${q.question}`;
  optionsContainer.innerHTML = "";
  q.options.forEach(opt => {
    const btn = document.createElement("button");
    btn.textContent = opt;
    btn.classList.add("option-btn");
    btn.onclick = () => selectOption(opt, q.answer);
    optionsContainer.appendChild(btn);
  });
}

function selectOption(selected, correct) {
  const buttons = document.querySelectorAll(".option-btn");
  buttons.forEach(btn => {
    btn.disabled = true;
    if (btn.textContent === correct) btn.style.background = "#27ae60";
    else if (btn.textContent === selected) btn.style.background = "#e74c3c";
  });
  if (selected === correct) score++;
}

nextBtn.onclick = () => {
  if (currentQuestion < quizData.length - 1) {
    currentQuestion++;
    loadQuestion();
  } else {
    showScore();
  }
};

function showScore() {
  document.getElementById("question-container").classList.add("hidden");
  nextBtn.classList.add("hidden");
  scoreContainer.classList.remove("hidden");
  scoreDisplay.textContent = `${score} / ${quizData.length}`;
}

restartBtn.onclick = () => {
  score = 0;
  currentQuestion = 0;
  document.getElementById("question-container").classList.remove("hidden");
  nextBtn.classList.remove("hidden");
  scoreContainer.classList.add("hidden");
  loadQuestion();
};

loadQuestion();
