# include<stdio.h>
# include<stdlib.h>

int main() {
    FILE *fp;

    fp = fopen("my_file.txt", "w+");

    if (fp == NULL) {
        printf("Failed to open a file\n");
        exit(1);
    }
    
    fflush(fp);
    rewind(fp);

    char str[50];
    
    fread(str, sizeof(str), 1, fp);

    printf("File content\n");
    printf("%s", str);

    if (fclose(fp)) {
        printf("Failed to close the file.\n");
        exit(1);
    }
}