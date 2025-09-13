#include <stdio.h>
int main() {
	int n;
	printf("Enter the number:- ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(i ==j || j + i == n + 1) {
				printf("%d",j);
			}
			else {
				printf(" ");
			}
		}

		printf("\n");
	}
}
// Doubt = why use this formula huh??