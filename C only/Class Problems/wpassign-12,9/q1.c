#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number of elements :- ");
	scanf("%d",&n);
	for(int f=1; f <= n; f++) {
		for(int i=1;i <= f; i++){
		    printf("%d ",i);
		}
		printf("\n");
	}
	
}