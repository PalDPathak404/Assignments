#include <stdio.h>

int main()
{
    float num1,num2,num3,num4;
    printf("Enter the first number to check if all four are balanced :- ");
    scanf("%f",&num1);
    printf("Enter the second number to check if all four are balanced :- ");
    scanf("%f",&num2);
    printf("Enter the third number to check if all four are balanced :- ");
    scanf("%f",&num3);
    printf("Enter the fourth number to check if all four are balanced :- ");
    scanf("%f",&num4);
    if (num1 + num2 == num3 + num4 || num1 + num3 == num2 + num4 || num1+num4 == num2 + num3){
        if(num1 > num2 && num1 > num3 && num1 > num4) 
                if( num4 - num3 == num2 - num1 || num4 - num2 == num3 - num1 || num4 - num1 == num3 - num2 ||
           num3 - num4 == num1 - num2 || num2 - num4 == num1 - num3 || num1 - num4 == num2 - num3){
            printf("The numbers given are Balanced pairs");
           }
           else{
            printf("The numbers given form Unbalanced pairs");
           }
        }
        else{
            printf("The given numbers don't even form pairs");
        }
    }
