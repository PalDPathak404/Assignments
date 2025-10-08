#include <stdio.h>
int fibo{
    int n;
    scanf("%d",&n);
    int first = 0;
    int second = 1;
    for(int i=1;i<n+1;i++){
        printf("term i = %d",first);
        printf("term i+1 = %d",second);
        new = first + second;
        first = second ;
        second = new;
        return new;
    }
}
int main()
{
    
}