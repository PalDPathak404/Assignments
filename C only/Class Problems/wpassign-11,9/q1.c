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
        int max = array[0];
        for(int i =0;i < n;i++){
            if(array[i] > max){
                max = array[i];
            }
        }
        printf("Maximum :- %d\n",max);
        int min = array[0];
        for(int i =0;i < n;i++){
            if(array[i] < min){
                min = array[i];
            }
        }
        printf("Mininmum :- %d\n",min);
}