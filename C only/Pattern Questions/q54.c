#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
            printf(" ");
    }
        for(int j=1;j<=i;j++){
           if(i ==1 ||  j == 1  || i==j){
            printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=n-1;i>0;i--){
    for(int j=i;j<=n;j++){
            printf(" ");
    }
        for(int j=1;j<=i;j++){
            if(i ==1 || i == n || j == 1 || j ==n || i==j){
            printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
//Doubt = How the fuck you got that just get to the reason asap you don't know how you made it and just made it. 