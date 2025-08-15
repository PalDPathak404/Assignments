#include <stdio.h>
int main()
{
    int a = 1,b = 7,c;
    while(a <= 10){
        c = b*a;
        printf("%d * %d = %d\n",a,b,c);
        a++;
    }

}