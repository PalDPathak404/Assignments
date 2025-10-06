#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=n;i>0;i--){
        for(int k=i;k<n;k++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
/* #include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
      int k=1;
      for(int j=1;j<=n;j++){
          if(j>=i){
              printf("%d",k++);
          }
          else{
              printf(" ");
          }
      }
      printf("\n");
  }
}
  Above is the other way to this question*/