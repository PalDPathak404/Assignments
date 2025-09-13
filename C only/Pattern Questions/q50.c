#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k = n*(n+1) / 2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d  ",k--);
        }
        printf("\n");
    }
    return 0;
}
//Doubt how you got the formula and how it works