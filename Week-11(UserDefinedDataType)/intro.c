#include<stdio.h>

struct  student {
    char name[15];
    int roll_number;
    float marks;
};

int main() {
    struct student st;
    // st.name = "Shoyeb";
    st.marks = 45.4;
    st.roll_number = 12344;

    printf("Student Marks: %f\n", st.marks);

    // Array of struct
    struct student studs[214];
    studs[12].marks = 34.4;
}