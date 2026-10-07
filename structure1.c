#include <stdio.h>
#include <string.h>

struct student{
    char name[50];
    int roll_no;
    char address[100];
};

int main()
{
    struct student s1;
    strcpy(s1.name, "Jeet Samani");
    s1.roll_no = 101;
    strcpy(s1.address, "Sg highway and dwarka");
    //assigning values to student structure");


    printf("Student name: %s\n", s1.name);
    printf("Student roll number: %d\n", s1.roll_no);
    printf("Student address: %s\n", s1.address);
    return 0;
}
