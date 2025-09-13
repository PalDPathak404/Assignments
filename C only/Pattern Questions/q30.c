#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int k=i;k<n;k++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            
            printf("%c ",'@' +j);
        }
        for(int j=i-1;j>0;j--){
            printf("%c ",'@' +j);
        }
        printf("\n");
    }
    for(int i=n-1;i>0;i--){
        for(int k=i;k<n;k++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            
            printf("%c ",'@' +j);
        }
        for(int j=i-1;j>0;j--){
            printf("%c ",'@' +j);
        }
        printf("\n");
    }
    return 0;
}