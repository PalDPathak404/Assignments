#include <stdio.h>
 struct date{
     int day;
     int month;
     int year;
 };
 struct employee{
     int id;
     char name[10];
     struct date a;
 };
 int main(){
     struct employee a1;
     printf("Enter the given details :- \n");
     printf("Id : ");
     scanf("%d",&a1.id);
     printf("Name : ");
     scanf("%s",a1.name);
     printf("Day of joining : ");
     scanf("%d",&a1.a.day);
    printf("Month of joining : ");
     scanf("%d",&a1.a.month);
     printf("Year of joining : ");
     scanf("%d",&a1.a.year);
     printf("\n\n\n----Details of Employee----\n\n\n");
     printf("Id : %d\n",a1.id);
     printf("Name : %s\n",a1.name);
     printf("Day of joining : %d\n ",a1.a.day);
    printf("Month of joining : %d\n",a1.a.month);
     printf("Year of joining : %d\n",a1.a.year);
    return 0;
}