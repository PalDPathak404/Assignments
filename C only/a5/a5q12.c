#include <stdio.h>
int main()
{
    int num,s,factorial_value=1;
    printf("Enter the number you want to see the factorial of :- ");
    scanf("%d",&num);
    for(s = 1;s <= num;s++){
        factorial_value=s*factorial_value;
         
    }
        printf("%d\n",factorial_value);
        
    }
