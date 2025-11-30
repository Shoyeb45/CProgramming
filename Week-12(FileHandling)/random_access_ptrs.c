#include <stdio.h>

int main() {
    FILE *fp = fopen("my_file.txt", "r");
    char string[20];

    fscanf(fp, "%s", string);
    printf("%s\n", string);

    /* Printing position of file pointer */
    printf("%ld\n", ftell(fp));
    
    rewind(fp); // mvoe the pointer to the beginning

    printf("%ld\n", ftell(fp)); // should print 0
    fclose(fp);
    return 0;
}