#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%c ", ch+j);
        }
        printf("\n");
        ch++;
    }
    return 0;
}