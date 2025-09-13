#include <stdio.h>
int main()
{
	int tempo;
	float pH;
	printf("Enter the pH you want to check of:- ");
	scanf("%f",&pH);
	printf("Enter the temperature you want to check of:- ");
	scanf("%d",&tempo);
	if(pH < 6 && tempo > 30) {
		printf("Acidic Hot Risk");
	}
	if(pH >= 6 && pH < 8 && tempo < 50) {
		printf("Safe");
	}
	
}