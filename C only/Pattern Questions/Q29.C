#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=n; i>0; i--) {
	    for(int k=i;k>=1;k--){
            printf(" ");
        }
		for(int j=1; j<= 2*(n-i)+1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for(int i=2; i<= n; i++) {
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