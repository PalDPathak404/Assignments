#include <stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    for (int i = 1; i <=3*n-2; i++)
    {
        for(int j=1; j<2*n;j++){
            if((i+j==n+ 1) || ((j-i==n-1) && i<2*n) || ((i-j==n-1) && i<2*n) || ((i+j == 3*n -1) && i<2*n) || ((i==j) && i>=n) || ((i+j ==2*n) && i>=n) || (i-j==2*n -2) || (i+j == 4*n-2))
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
    
}