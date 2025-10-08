#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	    int s = 3*n -2;
		int m = 2*n-1;
		for(int i=1; i<=s; i++) {
			for(int j=1; j<=m; j++) {
                if(i + j == n +1 || (j - i == n -1 && i <= m) || (i == n && j == n) || (i - j == n -1 && i<=m) || (i + j == 3*n -1 && i<m) || i - j == 2*n -2  || i + j == 3*n + 3 ){
                    printf("*");
                }
                else if (i >= n){
                    if(i == j){
                        printf("*");
                    }
                    else if ( i + j == 2*n){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
                
                else{
                    printf(" ");
                }
			}
			printf("\n");
		}
	
}
