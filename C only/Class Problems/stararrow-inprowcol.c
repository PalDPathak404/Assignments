#include <stdio.h>
int main(){
    int n,m;
    printf("Enter the number of columns:- ");
    scanf("%d",&n);
    printf("Enter the number of rows:- ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=n;j >=i;j--){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=m-1;i>0;i--){
        for(int j=n;j >=i;j--){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}