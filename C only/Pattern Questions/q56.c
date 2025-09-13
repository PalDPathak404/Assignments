//fix for 5
#include <stdio.h>
int main() {
	for(int i=1; i<=5; i++) {
		for(int j=1; j<=5; j++) {
			if(i ==1 || j ==1 || i == 5 || j ==5 || (i == 3 && j == 3)) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}

		printf("\n");
	}
}
// not fixed but left complete that input code for this too
// #include <stdio.h>
// int main() {
// 	int n;
// 	printf("Enter the number:- ");
// 	scanf("%d",&n);
// 	for(int i=1; i<=n; i++) {
// 		for(int j=1; j<=n; j++) {
// 			if(i ==1 || j ==1 || i == n || j ==n || (i == 3 && j == 3)) {
// 				printf("*");
// 			}
// 			else {
// 				printf(" ");
// 			}
// 		}

// 		printf("\n");
// 	}
// }