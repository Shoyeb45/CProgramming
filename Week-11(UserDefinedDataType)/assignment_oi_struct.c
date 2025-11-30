#include<stdio.h>
# include<string.h>
typedef struct {
    char name[50];
    int roll_number;
    float marks;
} Student;


Student create_student(const char* name, int roll_number, float marks) {
    Student stud;
    stud.marks = marks;
    stud.roll_number = roll_number;
    strncpy(stud.name, name, sizeof(stud.name));
    return stud;
}
void print_student(Student s) {
    printf("Name of the student: %s\n", s.name);
    printf("Roll number of the student: %d\n", s.roll_number);
    printf("Marks of the student: %f\n", s.marks);
}
int main() {
    Student s1 = { "Shoyeb", 123, 90 };

    printf("%s", s1.name);


    Student s2 = create_student("Md Shoyeb", 45, 23);
    printf("%s", s2.name);

    print_student(s1), print_student(s2);
}