#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the unit digit of the number  :- ");
    scanf("%f",&a);
    printf("Enter the tenth digit of the number :- ");
    scanf("%f",&b);
    printf("Enter the hundreth digit of the number :- ");
    scanf("%f",&c);
    int d = (int)a;
    int e = (int)b;
    int f = (int)c;
    int g = d + e + f;
    int h = d*e*f;
   if (d < 0 || d > 9 || e < 0 || e > 9 || f < 0 || f > 9 ){
    printf("The given digits for a three digit number is invalid");
    }
    else if(h == 0){
        printf("Division by zero is not possible");
    }
    else if(g % h == 0){
        printf("Yes, the sum of the digits of the three digit number %d%d%d is divisible by the product of the digits of the number",d,e,f);
    }
    
    else{
        printf("No, the sum of the digits of the three digit number %d%d%d is not divisible by the product of the digts of the same number",d,e,f);
    }
}