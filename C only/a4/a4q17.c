#include <stdio.h>
int main()
{
    float wait;
    printf("Enter the your weight to check the range :- ");
    scanf("%f",&wait);
    if(wait <= 0){
        printf("Weight can't be zero or negative");
    }
    else if(wait < 18.5){
        printf("Underweight");
    }
    else if(wait < 24.9 && wait > 18.5){
        printf("Normal");
    }
    else if(wait > 25 && wait < 29.9){
        printf("Overweight");
    }
    else if(wait >= 30 && wait < 35){
        printf("Obese");
    }
    else if(wait >= 35 && wait < 40){
        printf("Severely Obese");
    }
    else{
        printf("Extremely Obese");
    }
    
}