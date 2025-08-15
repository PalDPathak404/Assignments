#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number :- ");
    scanf("%d",&a);
    printf("Enter the second number :- ");
    scanf("%d",&b);
    printf("Enter the third number :- ");
    scanf("%d",&c);
    if(b - a != c - b){
        printf("Numbers given by you don't form an arithmatic progression");
    }
       else if(b - a > 10){
        printf("Numbers given by you form an Arithmatic progression but with a large gap"); 
    }

        else if(b - a == 0 ){
        printf("Numbers given by you form an arithmatic progression but it is constant"); 
    }

       else {
        printf("Numbers given by you form an arithmatic progression but with a small gap");
    }

}