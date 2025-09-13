#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1; i<= n; i++) {
	    for(int k=i;k>=1;k--){
            printf("  ");
        }
		for(int j=1; j<= 2*(n-i)+1; j++) {
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}