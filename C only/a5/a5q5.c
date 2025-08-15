#include <stdio.h>
int main()
{
    int i,s,a;
    printf("Enter the number you want to get the table of :-");
    scanf("%d",&a);
    for (i = 1;i <= 10;i++){
         s = a*i;
        printf("%d * %d = %d\n",a,i,s);
        }
    }
