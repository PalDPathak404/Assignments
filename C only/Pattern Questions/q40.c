
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=n; i >0; i--) {
	    for(int k=i;k>=1;k--){
            printf(" ");
        }
		for(int j=1; j<= 2*(n-i)+1; j++) {
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