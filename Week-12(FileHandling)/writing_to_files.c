# include<stdio.h>
# include<stdlib.h>

int main() {
    FILE *ifp;

    ifp = fopen("my_file.txt", "w");

    if (ifp == NULL) {
        printf("Failed to open a file\n");
        exit(1);
    }

    // Writing to file using fprintf: Formatted string can be written into file
    fprintf(ifp, "This file is written from C Program from Line %d\n", __LINE__);

    // Writing using fputs: Writes a string
    fputs("This line is written using **fputs**\n", ifp);

    // Writing using fwrite: We can write using array elements

    char str[] = "Using fwrite to write to a file.";
    fwrite(str, sizeof(str), 1, ifp);

    fputs("\n", ifp);
    // Using fputc to write a single single charachter to file

    const char string[] = "Testing fputc.\n";
    for (int i = 0; string[i] != '\0'; i++)
        fputc(string[i], ifp);
        
    if (fclose(ifp)) {
        printf("Failed to close the file\n");
        exit(1);
    }
}