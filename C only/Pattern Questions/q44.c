#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(n % 2 != 0){
			if(i == (n+1 )/2 || j == (n+1) /2) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		else{
			printf("Enter an Odd Number only");
		}
		}

		printf("\n");
	}
}
// Doubt = I can't take input and only fixed the number so fix that and make an input program for the given question.