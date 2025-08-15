#include <stdio.h>
int main()
{
    int a,b,c;
    c = 1;
    printf("Enter the number you want to get the factorial of :- ");
    scanf("%d",&a);
    for(b = 1;b <= a; b = b +1){
        c = c*b;
    }
    printf("The answer of the factorial of %d is %d",a,c);
}