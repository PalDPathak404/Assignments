#include <stdio.h>
int main()
{
    int i,s;
    for (i = 1;i <= 30;i++){
        s = i % 3;
        if(s == 0){
        printf("%d\n",i);
        }
    }
}