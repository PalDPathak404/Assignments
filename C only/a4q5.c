#include <stdio.h>
#include <math.h>
int main()
{
    float x,y;
    printf("Enter the x coordinate of the point :- ");
    scanf("%f",&x);
    printf("Enter the y coordinate of the point :- ");
    scanf("%f",&y);
    float c = 0.5;
    float area = sqrt(x*x + y*y); 
    if(area < 0){
        printf("Invalid coordinates");
    }
    else if(area <= 5){
        printf("Area is close");
    }
    else if(area > 5 && area < 15){
        printf("Area is Medium");
    }
    else {
        printf("Area is Far");
    }

}