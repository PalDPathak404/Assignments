#include <stdio.h>
int main() 
{
    int num,hund,tent,ment, sent,unit,num1,num2,num3,sum,prod;
    printf("Enter a three digit number :- ");
    scanf("%d",&num);
    hund = num / 100;
    ment = num / 10;
    sent = hund * 10;
    tent = ment - sent;
    num1 = hund * 100;
    num2 = tent * 10;
    num3 = num1 + num2;
    unit = num - num3;
    sum = hund + tent + unit;
    prod = hund * tent * unit;
    if(num < 100 || num > 999){
        printf("Please enter a valid three digit number");
    }
    else if (hund == 0 || tent == 0 || unit == 0){
        printf("Division by zero is not possible");
    }
    else if(sum % prod == 0){
        printf("Yes, Sum of the digits of number is divisible by the product of numbers");
    }
    else{
        printf("No, Sum of the digits of number is not divisible by the product of numbers");
    }

}