#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d;
    printf("enter the four constants that will be added done by one for a quadratic equation :- ");
    scanf("%f, %f, %f, %f", &a,&b,&c,&d);
    int e = (int)a;
    int f = (int)b;
    int g = (int)c;
    int h = (int)d;
    int x;
    int cons = g - h;
    int disc = f*f - 4*e*cons;
    if(a == 0){
        x = (h - g) / f;
        printf("This not a quadratic equation its a linear equation with solution %d",x);
    }
    else {
        if(disc >= 0){
            if(disc == 0){
                printf("There will be two completely equal roots");
                if(b > 0 && a > 0 || b < 0 && a < 0){
                    printf("The equal roots will be negative in nature");
                }
                else {
                    printf("The equal roots will be positive in nature");
                }
            }
                else {
                     if(sqrt(disc) > b){
                        printf("From the two roots, One of the root will be positive and another will be negative.");
                     }
                     else if(sqrt(disc) < b){
                        if (a > 0 && b < 0 || a < 0 && b > 0) {
                         printf("From the two roots, Both of them will be Positive");
                        }
                        else{
                            printf("From the two roots, Both of them will be negative");
                        }
                     }
                     else{
                        if ( a > 0 && b < 0 || a < 0 && b > 0){
                            printf("From the two roots, One of them will be zero and another will be positive");
                        }
                        else{
                            printf("From the two roots, One of them will be zero and another will be negative");
                        }
                     }
                    }
                }
                else {
                    printf("The roots are completely imaginary");
                }
                     
                }
            }
        
    
        
