#include <stdio.h>

int main()
{
    float P,R,T,A,C,M = 1,D;
    printf("Enter the principal amount :- ");
    scanf("%f",&P);
    printf("Enter the rate amount :- ");
    scanf("%f",&R);
    printf("Enter the time amount :- ");
    scanf("%f",&T);
    D=R/100;
    for(int i = 1; i<= T;i++){
        M = M*(1+D);
    }
    A = P*M;
    C = A-P;
    printf("%f",C);

    return 0;
}