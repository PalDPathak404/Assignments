#include <stdio.h>
int main()
{
    int m,n,gcd;
    printf("Enter the first number :- ");
    scanf("%d",&m);
    printf("Enter the second number :- ");
    scanf("%d",&n);
    if ( m < 0 || n < 0 ){
        printf("Please enter valid positive numbers");
    }
    else if(m == n){
        printf("Both the numbers are equal and thus they are itself g.c.d. of themselves");
    }
    else {
      while (m != n){
        if (m > n){
            m = m - n;
        }
        else {
            n = n - m;
        }
        gcd = m;
      }
      if (gcd == 1){
      printf("The two numbers given are co prime");
    }
    else if(gcd > 1){
      printf("The two numbers given are even common");
    }
    else{
        printf("The given two numbers are odd common");
    }
}
}