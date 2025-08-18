#include <stdio.h>
int main()
{
    float eff,fuel,dist;
    printf("Enter the fuel efficiency :- ");
    scanf("%f",&eff);
    printf("Enter the distance covered :- ");
    scanf("%f",&dist);
    fuel = dist/eff;
    if(eff <= 0 || dist <= 0){
        printf("Efficiency or distance can't be negative or zero");
    }
    else if(dist > 500){
        if(eff < 10){
            printf("Inefficient long trip");
        } 
        else{
            printf("Efficient long trip");
        }
    }
    else{
        if(fuel > 50){
            printf("Excessive");
        }
        else{
            printf("Moderate");
        }
    }
}