#include <stdio.h>

int main()
{
    int day,mont,year,dayo,monto,date,unit,tent,hund,thou,sum,dayoo,montoo,sont,a,b,sara,ali;
    printf("Enter the day of the date:- ");
    scanf("%d",&day);
    printf("Enter the month number of the date:- ");
    scanf("%d",&mont);
    printf("Enter the year of the date:- ");
    scanf("%d",&year);
    dayo = day * 1000000;
    monto = mont * 10000;
    date = dayo + monto + year;
    unit = year % 10;
    a = year / 10;
    tent = a % 10;
    b = a / 10;
    hund = b % 10;
    thou = b / 10;
    sont = unit * 1000;
    dayoo = tent * 100;
    montoo = hund * 10;
    sum = sont + dayoo + montoo + thou;
    sara = day * 100;
    ali = sara + mont;
    if(day > 31 || day < 0){
        printf("Invalid Input for day");
    }
    else if(mont > 12 || mont < 0){
        printf("Invalid Input for month");
    }
    else if(year <= 0){
        printf("Invalid Input for year");
    }
    else if(mont == 4 || mont == 6 || mont == 9 || mont == 11){
        if (day > 30 || day < 0){
            printf("Invalid Day count according to month\n");
        }
        
        }
        else if (mont == 1 || mont == 3 || mont == 5 || mont == 7 || mont == 8 || mont == 10 || mont == 12){
        if (day > 31 || day < 0){
           printf("Invalid Day count according to month\n");
        }
        
    }
    else if(year % 4 == 0){
        if(year % 100 != 0){
              if(mont == 2){
                  if (day > 29){
                      printf("Invalid Day count according to month and year\n");
                  }
              }
        else{
            if(year % 400 == 0){
                if(mont == 2){
                  if (day > 29){
                      printf("Invalid Day count according to month and year\n");
                  }
              }
            }
        }
        }
    }
    if(mont == 2){
        if(day > 28){
            printf("Invalid Day count according to month and year\n");
        }
    }
    else if(ali == sum){
         printf("The date provided by you is %d\n",date);
        if (year  > 2000){
            printf("Future Palindrome");
        }
        else {
            printf("Past Palindrome");
        }
    }
    else{
         printf("The date provided by you is %d\n",date);
        printf("But,Not a Palindrome");
    }
}