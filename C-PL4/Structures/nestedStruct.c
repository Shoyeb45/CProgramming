#include<stdio.h>

 struct course
 {
    char name[30];
    char subCode[5];
    float marks;
 };

 struct student
 {
    char SubName[30];
    int rollNo;
    struct course subjects[4];
 };
 
 

int main()
{

    return 0;
}