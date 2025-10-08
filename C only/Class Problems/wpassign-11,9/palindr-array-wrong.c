#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number of elements :- ");
	scanf("%d",&n);
	int array[n];
	printf("Enter the Elements :-    ");
	for(int f=0; f < n; f++) {
		scanf("%d",&array[f]);
	}
	int reverse[n];
	for(int i=0;i<n;i++){
	    for(int j=n;j>0;j--){
	    reverse[i] = array[j];
	    }
	}
	int count=0;
	for(int k=0;k<n;k++){
	    if(array[k] == reverse[k]){
	        count = count + 1;
	    }
	}
	if(count == n){
	    printf("Its a Palindrome");
	}
	else{
	    printf("Its not a Palindrome");
	}
	
}