#include <stdio.h>
int main()
{
    int a,b,ans;
    ans = 0;
    printf("Enter the number till which you want to get the sum of all numbers starting from 1 :- ");
    scanf("%d",&a);
    for(b=1;b<= a;b = b + 1){
       ans = ans + b;
    }
    printf("The sum required can be given as %d",ans);
}