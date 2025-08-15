#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    printf("Enter the first number that will be in base:- ");
    scanf("%d",&a);
    printf("Enter the second number that will be present in power :- ");
    scanf("%d",&b);
    int ans = pow(a,b);
    if (ans < 10000 && ans > 1000){
        if(ans % 2 == 0){
            printf("The answer is included in range and is even too");
        }
        else{
            printf("The answer is included in range but is odd");
        }
    }
        else{
            printf("The answer is not included in range itself");
        }
    }
