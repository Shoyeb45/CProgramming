# include<stdio.h>
# include<stdlib.h>

// struct representing student
typedef struct {
    char first_name[50];
    char last_name[50];
} Student;

int main() {
    FILE *fp;

    fp = fopen("student_data.dat", "w");

    if (fp == NULL) {
        printf("Failed to open a file\n");
        exit(1);
    }

    int num_of_stud;
    printf("How many number of student do you want to create?\n");
    scanf("%d", &num_of_stud);

    Student input;
    for (int i = 0; i < num_of_stud; i++) {
        printf("Enter first name:\n");
        scanf("%s", input.first_name);
        printf("Enter last name:\n");
        scanf("%s", input.last_name);

        fwrite(&input, sizeof(Student), 1, fp);
    }

    // read from the file

    fflush(fp);
    rewind(fp);
    while (!feof(fp)) {
	    fread(&input, sizeof(Student), 1, fp);
        printf("%s %s\n",input.first_name, input.last_name);
    }

    if (fclose(fp)) {
        printf("Failed to close the file\n");
        exit(1);
    }
}