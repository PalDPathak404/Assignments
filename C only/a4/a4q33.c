#include <stdio.h>
int main()
{
    int k,sqr,digi1,digi2,sum,a,b,c;
    printf("Enter the number you want to check if it is a kaprekar number :- "); 
    scanf("%d",&k);
    sqr = k*k;
    if (k < 0 || k > 100){
        printf("Invalid Input");
    }
    else if(sqr < 10){
         if(sqr == k){
            printf("The given number is a Kaprekar number");
        }
        else{
            printf("The given number is not a Kaprekar number");
        }
    }
    else if(sqr < 100 && sqr >= 10){
        digi2 = sqr % 10;
        digi1 = sqr / 10;
        sum = digi1 + digi2;
        if(sum == k){
            printf("The given number is a Kaprekar number");
        }
        else{
            printf("The given number is not a Kaprekar number");
        }
    }
    else if(sqr < 1000 && sqr >= 100){
       printf("This can't be a Kaprekar number");
    }
    else if(sqr >= 1000 && sqr < 10000){
        digi1 = sqr / 100;
        digi2 = sqr % 100;
        sum = digi1 + digi2;
        if(sum == k){
            printf("The given number is a Kaprekar number");
        }
        else{
            printf("The given number is not a Kaprekar number");
        }
        
    }
}