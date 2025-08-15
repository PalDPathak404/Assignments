#include <stdio.h>
int main()
{
    int time,num1,num2;
    printf("Enter the time in a four number digit format :- ");
    scanf("%d",&time);
    num1 = time/100;
    num2 = time % 100;
    if(time > 2359){
        printf("Please enter Valid time");
    }
    else if(num1 >= 12){
        if(num2 == 0){
            printf("Its P.M. and On the hour as well");
        }
        else if(num2 > 30){
            printf("Its P.M. and its Past half");
        }
        else if(num2 == 30){
            printf("Its P.M. and its exact Half");
        }
        else{
            printf("Its P.M. and its Before half");
        }
    }
    else{
        if(num2 == 0){
            printf("Its A.M. and On the hour as well");
        }
        else if(num2 > 30){
            printf("Its A.M. and its Past half");
        }
        else if(num2 == 30){
            printf("Its A.M. and its exact Half");
        }
        else{
            printf("Its A.M. and its Before half");
        }
    }
}