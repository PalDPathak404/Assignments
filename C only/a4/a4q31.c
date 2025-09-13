#include <stdio.h>

int main()
{
    float change,second;
    printf("Enter the stock price change :- ");
    scanf("%f",&change);
    if(change == 0){
         printf("Enter the second change if first one's zero:- ");
         scanf("%f",&second);
         if(second > 0){
        printf("Stabilized Up\n");
    }
    else{
        printf("Stabilized Down\n");
    }
    }
    else if (change > 5){
        printf("Strong gain\n");
    }
    else if(change <= 5 && change > 0){
        printf("Mild gain\n");
    }
    else if(change < 0 && change > -5){
        printf("Mild loss\n");
    }
    else{
        printf("Strong loss\n");
    }

    return 0;
}