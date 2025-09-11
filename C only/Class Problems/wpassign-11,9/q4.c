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
        
       for(int i =0 ; i<n ; i++){
           int count =0;
           for( int j = i ; j < n;j++){
               if(array[i] == array[j+1]){
                  count = count +1;
               }
           }
           if(count == 0){
               printf("%d ",array[i]);
           }
       }
}