#include <stdio.h>
    int main(){
        int n;
        printf("Enter the number of elements :- ");
        scanf("%d",&n);
        int array[n];
        printf("Enter the Elements :- ");
        for(int f=0;f < n; f++){
            scanf("%d",&array[f]);
        }
        int sum = 0;
        for(int i=0;i< n;i++){
            sum = sum + array[i];
        }
        printf("Sum of all elements :- %d\n",sum);
        float avg = sum / n;
        printf("Average of all elements :- %f",avg);
}