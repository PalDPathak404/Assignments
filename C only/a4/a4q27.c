#include <stdio.h>
int main()
{
    int mont,day,year;
    printf("Enter the day of the date:- ");
    scanf("%d",&day);
    printf("Enter the month number of the date:- ");
    scanf("%d",&mont);
    printf("Enter the year of the date:- ");
    scanf("%d",&year);
    switch(mont){
        case 1 : printf("January is the month\n");
                 break;
        case 2 : printf("February is the month\n");
                         break;
         case 3 : printf("March is the month\n");                 
                          break;
         case 4 : printf("April is the month\n");
                          break;
         case 5 : printf("May is the month\n");
                          break;
         case 6 : printf("June is the month\n");
                          break;
         case 7 : printf("July is the month\n");
                          break;
         case 8 : printf("August is the month\n");
                          break;
         case 9 : printf("September is the month\n");
                          break;
         case 10 : printf("October is the month\n");
                          break;
         case 11 : printf("November is the month\n");
                          break;
         case 12 : printf("December is the month\n");
                          break;
         default : printf("Invalid Month\n");
    }
    if (year < 1900 || year > 2100){
        printf("Invalid year\n");
    }
    else if (year % 100 == 0){
        if (year % 400 == 0){
            printf("The year is leap year\n");
            if(mont == 2){
                printf("The no. of days are 29\n");
            }
            else if (mont == 1 || mont == 3 || mont == 5 || mont == 7 || mont == 8 || mont == 10 || mont == 12){
        if (day > 31 || day < 0){
           printf("Invalid Day count according to month\n");
        }
        else{
            printf("The no. of days are 31\n");
        }
    }
    else if(mont == 4 || mont == 6 || mont == 9 || mont == 11){
        if (day > 30 || day < 0){
            printf("Invalid Day count according to month\n");
        }
        else{
            printf("The no. of days are 30\n");
        }
        }
        else{
            printf("Invalid Month\n");
        }
        }
        else{
            printf("The year is not a leap year\n");
            if(mont == 2){
                printf("The no. of days are 28\n");
            }
            else if (mont == 1 || mont == 3 || mont == 5 || mont == 7 || mont == 8 || mont == 10 || mont == 12){
        if (day > 31 || day < 0){
           printf("Invalid Day count according to month\n");
        }
        else{
            printf("The no. of days are 31\n");
        }
    }
    else if(mont == 4 || mont == 6 || mont == 9 || mont == 11){
        if (day > 30 || day < 0){
            printf("Invalid Day count according to month\n");
        }
        else{
            printf("The no. of days are 30\n");
        }
        }
        }
    } 
    else if(year% 4 == 0){
         printf("The year is leap year\n");
            if(mont == 2){
                printf("The no. of days are 29\n");
            }
            else if (mont == 1 || mont == 3 || mont == 5 || mont == 7 || mont == 8 || mont == 10 || mont == 12){
        if (day > 31 || day < 0){
           printf("Invalid Day count according to month\n");
        }
        else{
            printf("The no. of days are 31\n");
        }
    }
    else if(mont == 4 || mont == 6 || mont == 9 || mont == 11){
        if (day > 30 || day < 0){
            printf("Invalid Day count according to month\n");
        }
        else{
            printf("The no. of days are 30\n");
        }
        }
        else{
            printf("Invalid Month\n");
        }
    }
    else if(year % 4 != 0){
        printf("The year is not a leap year\n");
            if(mont == 2){
                printf("The no. of days are 28\n");
            }
            else if (mont == 1 || mont == 3 || mont == 5 || mont == 7 || mont == 8 || mont == 10 || mont == 12){
        if (day > 31 || day < 0){
           printf("Invalid Day count according to month\n");
        }
        else{
            printf("The no. of days are 31\n");
        }
    }
    else if(mont == 4 || mont == 6 || mont == 9 || mont == 11){
        if (day > 30 || day < 0){
            printf("Invalid Day count according to month\n");
        }
        else{
            printf("The no. of days are 30\n");
        }
        }
    }
    else{
        printf("Invalid Month\n");
    }
}
