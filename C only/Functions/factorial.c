#include <stdio.h>
int factorial(){
    int n,fact=1;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int printer = factorial();
    printf("%d",printer);
}