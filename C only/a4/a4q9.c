#include <stdio.h>
int main()
{
   int a,b,c;
   printf("Enter the number you want as the base :- ");
   scanf("%d",&a);
   printf("Enter the number you want as exponent :- ");
   scanf("%d",&b);
   c = a;
   while(b != 1){
      c = c*a;
      b--;
   }
   printf("The answer is %d",c);
}