#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number:- ");
    scanf("%d",&a);
    printf("Enter the second number:- ");
    scanf("%d",&b);
    printf("Enter the third number:- ");
    scanf("%d",&c);
    int sqa = a*a;
    int sqb = b*b;
    int sqc = c*c;
    if (sqa + sqb == sqc || sqb + sqc == sqa || sqc + sqa == sqb){

    }
    else{
        printf("The given numbers don't form a pythagorean triple");
    }
}