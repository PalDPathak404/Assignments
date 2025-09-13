#include <stdio.h>
int main()
{
	int num1,num2,num3,num4,num5;
	printf("Enter the first number :- ");
	scanf("%d",&num1);
	printf("Enter the second number :- ");
	scanf("%d",&num2);
	printf("Enter the third number :- ");
	scanf("%d",&num3);
	printf("Enter the fourth number :- ");
	scanf("%d",&num4);
	printf("Enter the fifth number :- ");
	scanf("%d",&num5);
	if(num1 < num2 && num2 < num3 && num3 < num4 && num4 < num5) {
		printf("The numbers are ordered and stricktly increasing");
	}
	else if(num1 > num2 && num2<num3 && num3 <num4 && num4 <num5 ||
	        num1 < num2 && num2 > num3 && num3 <num4 && num4<num5 ||
	        num1 < num2 && num2<num3 && num3 >num4 && num4 <num5 ||
	        num1 < num2 && num2<num3 && num3<num4 && num4 >num5) {
		printf("The given numbers are unordered with an inversion of 1");
	}
	else {
		printf("The given numbers are unordered with an inversion of 2 or more than 2");
	}
}