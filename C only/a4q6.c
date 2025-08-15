#include <stdio.h>
int main()
{
    float lent,bret,diag;
    printf("Enter the length of the rectangle:- ");
    scanf("%f",&lent);
    printf("Enter the breadth of the rectangle:- ");
    scanf("%f",&bret);
    printf("Enter the diagonal of the rectangle:- ");
    scanf("%f",&diag);
    float on = diag*diag;
    int one = lent*lent;
    int onee = bret*bret;
    int oneee = one + onee;
    if(lent <= 0 || bret <= 0 || diag <= 0){
        printf("Sides can't be negative or zero");
    }
    else if (lent == bret){
        printf("This is a SQUARE not a Rectangle");
    }
    else if (on == oneee || on + 0.1 == oneee || on - 0.1 == oneee){
        printf("This is a Rectangle");
    }
    else{
        printf("Invalid values to be a rectangle");
    }
}