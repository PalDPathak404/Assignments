#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number you want to get the factorial of :- ");
    scanf("%d",&a);
    b = 1;
    c = 1;
    while(b <= a){
        c = c*b;
        b++;
    }
    printf("%d",c);

}