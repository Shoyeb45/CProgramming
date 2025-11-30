# include<stdio.h>
# include<stdlib.h>

int main() {
    FILE *ifp;

    ifp = fopen("my_file.txt", "r");

    if (ifp == NULL) {
        printf("Failed to open a file\n");
        exit(1);
    }

    // Reading using fscanf
    char str[1000];
    fscanf(ifp, "%s", str); // will only read string till next space
    printf("First word from the file: %s\n", str);
    
    // Reading using fgets
    fgets(str, 100, ifp); // Will read the first line

    printf("First line from the file: %s\n", str);
    
    // Reading using fread
    char buffer[50];
    fseek(ifp, 0, SEEK_SET); // it sets the file pointer to the beginning
    fread(buffer, sizeof(str), 1, ifp); // it will read entire content by the given size and then the number of that 
    // sized data
    
    printf("Content of the file:\n%s\n", buffer);


    // Reading using fgetc: Read single singel character from the file
    fseek(ifp, 0, SEEK_SET);
    printf("\nReading the content character by character:\n");
    while (1) {
        char c = fgetc(ifp);
        // break out when end of file found.
        if (feof(ifp)) 
            break; 
        printf("%c", c);
    }
    if (fclose(ifp)) {
        printf("Failed to close the file\n");
        exit(1);
    }
}