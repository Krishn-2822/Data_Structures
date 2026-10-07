#include <stdio.h>
#include <string.h>

struct student{
    char name[50];
    int roll_no;
    char address[100];
};

int main()
{
    struct student s1[5];
    for(int i=0;i<5;i++){
        printf("Enter name of student %d: ",i+1);
        scanf("%s",s1[i].name);
        printf("Enter roll number of student %d: ",i+1);
        scanf("%d",&s1[i].roll_no);
        printf("Enter address of student %d: ",i+1);
        scanf("%s",s1[i].address);
        printf("\n");
    }


    for(int i=0;i<5;i++){
        printf("\nStudent %d name: %s\n", i+1, s1[i].name);
        printf("Student %d roll number: %d\n", i+1, s1[i].roll_no);
        printf("Student %d address: %s\n", i+1, s1[i].address);
    }

    return 0;

}