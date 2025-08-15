#include <stdio.h>
int main()
{
    int a,b = 1;
    printf("Enter the number you want to print from that number till 1 :- ");
    scanf("%d",&a);
    while(a >= b){
        printf("%d\n",a);
        a--;
    }
}