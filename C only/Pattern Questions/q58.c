#include <stdio.h>
int main() {
	for(int i=1; i<=5; i++) {
		for(int j=1; j<=5; j++) {
			if(i ==3 || j ==3) {
				printf("%d",j);
			}
			else {
				printf(" ");
			}
		}

		printf("\n");
	}
}
// Doubt = I can't take input and only fixed the number so fix that and make an input program for the given question.