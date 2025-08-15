#include <stdio.h>
int main()
{
    float pH;
    printf("Enter the pH of the chemical you want to check the nature :- ");
    scanf("%f",&pH);
    if (pH < 0 || pH > 14){
        printf("The pH given by you is Invalid");
    }
    else if(pH < 7){
        printf("According to the pH given by you the chemical solution is Acidic in nature");
    }
    else if(pH == 7){
        printf("According to the pH given by you the chemical solution is Neutral in nature");
    }
    else if(pH > 7 && pH <= 10){
        printf("According to the pH given by you the chemical solution is Basic in nature");
    }
    else{
        printf("According to the pH given by you the chemical solution is Strongly Basic in nature");
    }
}