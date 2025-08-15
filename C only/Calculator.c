#include <stdio.h>

int main()
{
    double a;
    char c;
    double b;
    double d;
    printf("Enter an number:- ");
    scanf("%lf",&a);
    printf("Enter from any of the given operators :- +,-,*,/ :- ");
   scanf(" %c",&c);
    printf("Enter a number:- ");
    scanf("%lf",&b);
    if (c == '+'){
        d = a+b;
        printf("Answer of the sum of the given ones is %lf",d);
    }
    else if(c == '-'){
       if(a >b){
        d = a - b;
        printf("Answer of the substraction of the given ones is %lf",d);
       }
       else {
           d = b - a;
           printf("Answer of the substraction of the given ones is %lf",d);
       }
    }
    else if(c == '*'){
        d = a*b;
        printf("Answer of the multiplication of the given ones is %lf",d);
    }
    else if(c == '/'){
    if (a,b != 0){
        d = a/b;
        printf("Answer of the division of the given ones is %lf",d);
    }
    else {
        printf("Division with 0 is not possible");
    }
    }
    else {
        printf("Invalid operator used");
    }
}