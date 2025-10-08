#include <stdio.h>
 struct book{
     char title[10];
     char author[10];
     float price;
 };
 int main(){
     struct book a;
    printf("Enter the title of the book :- ");
    scanf("%s",a.title);
    
    printf("Enter author name of the book :- ");
    scanf("%s",a.author);
    
    printf("Enter the price of the book :- ");
    scanf("%f",&a.price);
    
    printf("\n\n\n----Details of Book----\n\n\n");
    printf("1. Title of the Book = %s\n",a.title);
    printf("2. Author of the Book = %s\n",a.author);
    printf("3. Price of the Book = %f\n",a.price);
    return 0;
}
// no star near char in structure coz we need to tuse malloc() then
//also for taking input from user declaring array uis compulsory 