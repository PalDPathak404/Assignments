#include <stdio.h>
 struct student{
     char name[50];
     int rollno;
     float marks;
 };
 int main(){
     struct student a;
     
    printf("Enter the details of all 5 students :- \n\n");
    printf("Student 1 : \n");
    printf("Name : ");
    scanf("%s",a.name);
    printf("Roll No. : ");
    scanf("%d",&a.rollno);
    printf("Marks : ");
    scanf("%f",&a.marks);
    char info1[3] = {a.name,a.rollno,a.marks}; 
    
    printf("\nStudent 2 : \n");
    printf("Name : ");
    scanf("%s",a.name);
    printf("Roll No. : ");
    scanf("%d",&a.rollno);
    printf("Marks : ");
    scanf("%f",&a.marks);
    char info2[3] = {a.name,a.rollno,a.marks};
    
    printf("\nStudent 3 : \n");
    printf("Name : ");
    scanf("%s",a.name);
    printf("Roll No. : ");
    scanf("%d",&a.rollno);
    printf("Marks : ");
    scanf("%f",&a.marks);
    char info3[3] = {a.name,a.rollno,a.marks};
    
    printf("\nStudent 4 : \n");
    printf("Name : ");
    scanf("%s",a.name);
    printf("Roll No. : ");
    scanf("%d",&a.rollno);
    printf("Marks : ");
    scanf("%f",&a.marks);
    char info4[3] = {a.name,a.rollno,a.marks};
    
    printf("\nStudent 5 : \n");
    printf("Name : ");
    scanf("%s",a.name);
    printf("Roll No. : ");
    scanf("%d",&a.rollno);
    printf("Marks : ");
    scanf("%f",&a.marks);
    char info5[3] = {a.name,a.rollno,a.marks};
    
    char* studentInfo[5] = {info1[3],info2[3],info3[3],info4[3],info5[3]};
    printf("\n\n\n----Details of all 5 Students----\n\n\n");
    printf("1. Student 1 \n Name = %s\n Roll No. = %d\n Marks = %f\n\n",studentInfo[1]);
    printf("2. Student 2 \n Name = %s\n Roll No. = %d\n Marks = %f\n\n",studentInfo[2]);
    printf("3. Student 3 \n Name = %s\n Roll No. = %d\n Marks = %f\n\n",studentInfo[3]);
    printf("4. Student 4 \n Name = %s\n Roll No. = %d\n Marks = %f\n\n",studentInfo[4]);
    printf("5. Student 5 \n Name = %s\n Roll No. = %d\n Marks = %f\n\n",studentInfo[5]);
    return 0;
}