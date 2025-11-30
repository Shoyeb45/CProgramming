#include <stdio.h>

typedef struct {
    char c_code[5];
    char c_name[50];
    float marks;
} Course;


typedef struct {
    char s_name[50];
    int roll_no;
    Course subjects[4];
} Student;


int main() {
    // define students
    Student students[2];

    for (int i = 0; i < 2; i++) {
        printf("Enter the name of the %d student: \n", (i + 1));
        scanf("%s", students[i].s_name);
        printf("Enter the roll number of the %d student: \n", (i + 1));
        scanf("%d", &students[i].roll_no);

        for (int j = 0; j < 4; j++) {
            printf("Enter the subject name of the student: \n");
            scanf("%s", students[i].subjects[j].c_name);
            printf("Enter the subject code of the student: \n");
            scanf("%s", students[i].subjects[j].c_code);
            printf("Enter the subject marks of the student: \n");
            scanf("%f", &students[i].subjects[j].marks);
        }
    }

    printf("|\tStudent Name\t|\tRoll Number\t|");
    for (int j = 1; j <= 4; j++) {
        printf("\tSubject-%d Name - Code\t|", j);
    }
    printf("\n");

    for (int i = 0; i < 2; i++) {
        printf("%s\t|\t%d\t|", students[i].s_name, students[i].roll_no);
        for (int j = 0; j < 4; j++) {
            printf("%s - %s\t|\t %f \t|", students[i].subjects[j].c_name, students[i].subjects[j].c_code, students[i].subjects[j].marks);
        }
    }
}