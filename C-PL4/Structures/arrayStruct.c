#include<stdio.h>

struct student
{
  char name[30];
  int roll_no;
  float marks;
};


int main()
{
    struct student stud[2];
    for(int i=0; i<2 ; i++){
        printf("Name studnet %d:",i+1);
        scanf("%s",stud[i].name);
    }

    for(int i=0; i<2 ; i++){
        printf("Roll number studnet %d:",i+1);
        scanf("%d",& stud[i].roll_no);
    }
    
    for(int i=0; i<2 ; i++){
        printf("Enter marks of studnet %d:",i+1);
        scanf("%d",& stud[i].marks);
    }

    printf("Name\tRoll number\tMarks\n");

    for(int i=0 ;i<2 ; i++){
        printf("%s\t%d\t%d\n",stud[i].name, stud[i].marks, stud[i].roll_no);
    }
    return 0;
}