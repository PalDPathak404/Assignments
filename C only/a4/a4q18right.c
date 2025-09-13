#include <stdio.h>

int maxo(int e,int f,int g,int h){
  int max;
  if (e > f && e > g && e > h){
    max = e;
  }
  else if(f >e && f > g && f > h){
    max = f;
  }
  else if(g > e && g > f && g > h){
    max = g;
  }
  else{
    max = h;
    return max;
  }
}
int mino(int e,int f,int g,int h){
  int min;
  if (e < f && e < g && e < h){
    min = e;
  }
  else if(f <e && f < g && f < h){
    min = f;
  }
  else if(g < e && g < f && g < h){
        min = g;
  }
  else{
    min = h;
    return min;
  }
}
int main()
{
    float num1,num2,num3,num4;
    int a,b,c,d,i,j,max,min;
    printf("Enter the first number to check if all four are balanced :- ");
    scanf("%f",&num1);
    printf("Enter the second number to check if all four are balanced :- ");
    scanf("%f",&num2);
    printf("Enter the third number to check if all four are balanced :- ");
    scanf("%f",&num3);
    printf("Enter the fourth number to check if all four are balanced :- ");
    scanf("%f",&num4);
    a = (int)num1;
    b = (int)num2;
    c = (int)num3;
    d = (int)num4;
    max = maxo(a,b,c,d);
    min = mino(a,b,c,d);
     i = max;
     j = min;
    if (a+ b == c + d || a+ c == b + d || a+d == b + c){
                if( i - j == 3){
            printf("The numbers given are Balanced pairs");
           }
           else{
            printf("The numbers given form Unbalanced pairs");
           }
        }
        else{
            printf("The given numbers don't even form pairs");
        }
    }