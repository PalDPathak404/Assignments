#include <stdio.h>
int main()
{
    float units;
    printf("Enter the number of units you used :- ");
    scanf("%f",&units);
    float un;
    if(units <= 100 && units > 0){
        un = units*5;
        printf("You have to pay %f amount of money in your electricity bill, Normal consumption",un);
    }
       else if(units <= 150 && units > 100){
        un = units*7;
        printf("You have to pay %f amount of money in your electricity bill, Normal consumption",un); }

        else if(units <= 200 && units > 150){
        un = units*7;
        printf("You have to pay %f amount of money in your electricity bill, Normal consumption, High consumption",un); }

       else if(un > 200){
        un = units*10;
        printf("You have to pay %f amount of money in your electricity bill, High consumption",un);}
    
      else {
        printf("Invalid no. of units");
    }

}