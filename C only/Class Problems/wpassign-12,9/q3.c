#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number of elements :- ");
	scanf("%d",&n);
	int array[n];
	printf("Enter the Elements :- ");
	for(int f=0; f < n; f++) {
		scanf("%d",&array[f]);
	}
	int target;
	printf("Enter the Target Sum :- ");
	scanf("%d",&target);
	for(int i=0;i<n ; i++){
	    for(int j=i+1;j<n;j++){
	        if(array[i] + array[j] == target){
	            printf("(%d,%d) ",array[i],array[j]);
	        }
	    }
	}
}
