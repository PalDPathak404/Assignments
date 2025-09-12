#include <stdio.h>

int main()
{
   
    for(int i=1;i<=5;i++){
    for(int j=i-8;j<=5;j++){
            printf(" ");
    }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=3;i<=7;i++){
    for(int j=i-6;j<=7;j++){
            printf(" ");
    }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=5;i<=9;i++){
    for(int j=i-4;j<=9;j++){
            printf(" ");
    }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=7;i<=11;i++){
    for(int j=i-8;j<=5;j++){
            printf(" ");
    }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=4;i++){
    for(int j=2;j<=3;j++){
            printf("     ");
    }
        for(int j=1;j<=4;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}