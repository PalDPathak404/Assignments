#include <stdio.h>
int main()
{
    int a,b,c;
    c = 0;
    printf("Enter a number to get the number of even numbesr till that number :- ");
    scanf("%d",&a);
    for(b=1; b <= a;b = b +1){
        if(b%2 == 0){
        c = c + 1;
        }
    }
        printf("The number of even numbers from 1 to %d is %d",a,c);
    
}
// q1. take integer as input and find how many even numbers are present between that number and one.