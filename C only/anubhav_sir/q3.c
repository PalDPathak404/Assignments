#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int counta = 64;
    int countb = 64;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c%c ",counta+i,countb+j);
        }
        printf("\n");
    }
}