#include <stdio.h>
char* type(){
    int n;
    scanf("%d",&n);
    if(n > 0){
        return "Positive Number";
    }
    else if(n==0){
        return "Zero";
    }
    else{
        return "Negative Number";
    }
}
int main(){
    char* printer = type();
    printf("%s",printer);
    return 0;
}