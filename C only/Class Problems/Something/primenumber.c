#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number of which you want to check is prime or not :- ");
    scanf("%d",&num);
    int track = 0;
    for (int a = 2; a<=  num - 1; a++){
         if (num % a == 0){
            track = 1;
            break;
         }
    }
    if (track == 0){
        printf("Prime Number");
    }
    else{
        printf("Not a Prime Number");
    }

}