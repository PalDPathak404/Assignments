#include <stdio.h>
int main(){
    int n;
    printf("Enter the number:- ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
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

}