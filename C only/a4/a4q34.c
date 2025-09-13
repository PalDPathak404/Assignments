#include <stdio.h>

int main()
{
   char lower1,lower2;
   int digi1,digi2,diff;
   printf("Enter a lowercase character :- ");
   scanf("%c",&lower1);
   printf("Enter another lowercase character :- ");
   scanf(" %c",&lower2);
   digi1 = (int)lower1;
   digi2 = (int)lower2;
   if(digi1 <= 97 && digi1 >= 122 || digi2 <= 97 && digi2 >= 122 ){
       printf("Not a lowercase charcter");
   }
   else {
       if(digi1 > digi2){
       diff = digi1 - digi2;
       if(diff % 2 == 0){
           if(digi1 == 97 || digi1 == 101 || digi1 == 105 || digi1 == 111 || digi1 == 117
           && digi2 == 97 || digi2 == 101 || digi2 == 105 || digi2 == 111 || digi2 == 117){
               printf("Even Vowel Pair");
           }
           else if(digi1 == 97 || digi1 == 101 || digi1 == 105 || digi1 == 111 || digi1 == 117
           || digi2 == 97 || digi2 == 101 || digi2 == 105 || digi2 == 111 || digi2 == 117){
               printf("Even Mixed Pair");
           }
           else{
               printf("Even Consonant pair");
           }
       }
       else{
           printf("Odd Difference");
       }
   }
    if(digi2 > digi1){
        diff = digi2 - digi1;
       if(diff % 2 == 0){
           if(digi1 == 97 || digi1 == 101 || digi1 == 105 || digi1 == 111 || digi1 == 117
           && digi2 == 97 || digi2 == 101 || digi2 == 105 || digi2 == 111 || digi2 == 117){
               printf("Even Vowel Pair");
           }
           else if(digi1 == 97 || digi1 == 101 || digi1 == 105 || digi1 == 111 || digi1 == 117
           || digi2 == 97 || digi2 == 101 || digi2 == 105 || digi2 == 111 || digi2 == 117){
               printf("Even Mixed Pair");
           }
           else{
               printf("Even Consonant pair");
           }
       }
       else{
           printf("Odd Difference");
       }
    }
   }
}