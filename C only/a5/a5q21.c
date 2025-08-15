#include <stdio.h>
int main()
{
    int a,b = 1;
    printf("Enter the number you want to print till from 1 :- ");
    scanf("%d",&a);
    while(b <= a){
        printf("%d\n",b);
        b++;
    }
}