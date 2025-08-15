#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number :- ");
    scanf("%d",&a);
    printf("Enter the second number:- ");
    scanf("%d",&b);
    printf("Enter the third number:- ");
    scanf("%d",&c);
    int d = a*b*c;
    if (d % 6 == 0 && d % 9 != 0){
        printf("The given set of numbers is a special set");
    }
    else{
        printf("The given set of numbers is a normal set");
    }
}