#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2,slope,changex,changey,changexo,changeyo,slopy;
    printf("Enter the x coordinate of the first point :- ");
    scanf("%f",&x1);
    printf("Enter the y coordinate of the first point :- ");
    scanf("%f",&y1);
    printf("Enter the x coordinate of the second point :- ");
    scanf("%f",&x2);
    printf("Enter the x coordinate of the second point :- ");
    scanf("%f",&y2);
    changey = y2 - y1;
    changex = x2 - x1;
    changeyo = fabs(changey);
    changexo = fabs(changex);
    slope = changey / changex;
    slopy = changeyo / changexo;
    if (changex == 0){
        printf("Slope = Vertical\n");
    }
    else if (changey == 0){
        printf("Slope = Horizontal\n");
    }
    else if (slope > 0){
        printf("Slope = Rising\n");
    }
    else{
        printf("Slope = Falling\n");
    }
    if(slopy > 1){
        printf("Slope = Steep");
    }
    return 0;
}
