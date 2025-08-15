#include <stdio.h>

int main()
{
   int mark1,mark2,mark3,mark4,mark5;
   printf("Enter your first subject marks :- ");
   scanf("%d",&mark1);
   printf("Enter your second subject marks :- ");
   scanf("%d",&mark2);
   printf("Enter your third subject marks :- ");
   scanf("%d",&mark3);
   printf("Enter your fourth subject marks :- ");
   scanf("%d",&mark4);
   printf("Enter your fifth subject marks :- ");
   scanf("%d",&mark5);
   int total = mark1 + mark2 + mark3 + mark4 + mark5;
   int perc = (total / 5);
   if (mark1 < 0 || mark1 > 100 ||
       mark2 < 0 || mark2 > 100 ||
        mark3 < 0 || mark3 > 100 ||
        mark4 < 0 || mark4 > 100 ||
        mark5 < 0 || mark5 > 100){
       printf("Please enter valid marks");
   }
   else if(perc >= 90){
       printf("Outstanding");
   }
    else if(perc >= 70){
       printf("Consistent");
   }
    else if(perc >= 50){
       printf("Passable");
   }
    else {
       printf("Needs Improvement");
   }
 return 0;
}