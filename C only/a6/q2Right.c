#include <stdio.h>
 struct student{
     char name[10];
     int rollno;
     float marks;
 };
 int main(){
     struct student a[5];
     for(int i=0;i<5;i++){
     printf("Student %d : ",i+1);
    printf("Name : ");
    scanf("%s",a[i].name);
    printf("Roll No. : ");
    scanf("%d",&a[i].rollno);
    printf("Marks : ");
    scanf("%f",&a[i].marks);
     }
    printf("\n\n\n----Details of all 5 Students----\n\n\n");
    for(int j=0;j<5;j++){
        printf("Student %d \n",j+1);
        printf("Name = %s\n",a[j].name);
        printf("Roll No. = %d\n",a[j].rollno);
        printf("Marks = %f\n",a[j].marks);
        
    }
    
    return 0;
}