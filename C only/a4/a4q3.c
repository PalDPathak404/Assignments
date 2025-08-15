#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the first number :- ");
    scanf("%f",&a);
    printf("Enter the second number :- ");
    scanf("%f",&b);
    printf("Enter the third number :- ");
    scanf("%f",&c);
    printf("Enter the fourth number :- ");
    scanf("%f",&d);
    if (a>b && a>c && a<d || a>d && a>c && a<b || a<c && a>d && a>b) {
        printf("a is the second largest number");
    }
    else if(b>a && b>c && b<d || b>d && b>c && b<a || b<c && b>d && b>a){
        printf("b is the second largest number");
    }
    else{
        printf("c is the second largest number");
    }
}