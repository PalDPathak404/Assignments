#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number of elements :- ");
	scanf("%d",&n);
	for(int f=n; f > 0; f--) {
		for(int i=1;i <= f; i++){
		    printf("* ");
		}
		printf("\n");
	}
	
}