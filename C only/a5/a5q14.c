#include <stdio.h>
int main()
{
    int a;
    a = 2;
    while(a <= 20){
        if(a % 2 == 0){
            printf("%d\n",a);
        }
        a++;
    }
}