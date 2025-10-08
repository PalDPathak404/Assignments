#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1; i<= n; i++) {
	    for(int k=i;k>=1;k--){
            printf(" ");
        }
		for(int j=1; j<= 2*(n-i)+1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//review the formula you used here
/*#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int k=n;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
          printf(" ");
      }
      for(int j=1;j<= 2*k-1;j++){
          printf("*");
      }
      k--;
      printf("\n");
  }
}
 */