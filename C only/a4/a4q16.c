#include <stdio.h>
int main()
{
    int R,G,B;
    printf("Enter the number yoou want to keep in the base :- ");
    scanf("%d",&R);
    printf("Enter the number you want to keep as exponent :- ");
    scanf("%d",&G);
    printf("Enter the number you want to keep as exponent :- ");
    scanf("%d",&B);
   if ( R == G == B){
    printf("The sade formed here with the giveen combination is of Gray");
}
else if (R > G && R > B){
    printf("It is warm according to the given combination");
}
else if(B > R && B> G){
    printf("It is cool accoding to the given combination");
}
else{
    printf("It is neutral according to the given combination");
}
}