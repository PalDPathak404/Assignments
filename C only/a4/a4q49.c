#include <stdio.h>
int main()
{
   int exp,bas,c,lent;
   printf("Enter the number you want as the base :- ");
   scanf("%d",&bas);
   printf("Enter the number you want as exponent :- ");
   scanf("%d",&exp);
   c = bas;
   if(exp > 5){
    printf("Please enter an exponent less than or equal to 5 to move furthur.");
   }
   else{
   while(exp != 1){
      c = c*bas;
      exp--;
   }
   while(c>0){
    c = c/10;
    lent = lent +1;
   }
   
}
}