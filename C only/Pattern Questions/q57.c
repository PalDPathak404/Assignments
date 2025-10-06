#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i <= n;i++){
        int dist =0;
        for(int j =1 ; j<= n ; j++){
            if(i == 1 || i == n  || j == 1 || j == n){
                dist = 0;
                 printf("%d",dist + 1);
            }
            else {
                printf(" ");
            }
           
        }
        printf("\n");
    }
}