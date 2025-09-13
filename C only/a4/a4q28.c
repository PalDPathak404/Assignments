#include <stdio.h>
int main()
{
    float ang;
    printf("Enter the value of angle in degrees:- ");
    scanf("%f",&ang);
    if(ang <= 0){
        printf("Invalid Angle");
    }
    else if(ang < 90){
        if(ang < 45){
            printf("Sharp Acute");
        }
        else{
            printf("Acute");
        }
    }
    else if(ang == 90){
        printf("Exact Right angle");
    }
    else if(ang > 90 && ang < 180){
        printf("Obtuse");
    }
    else if(ang == 180){
        printf("Straight Line");
    }
    else{
        printf("Reflex");
    }
    
}