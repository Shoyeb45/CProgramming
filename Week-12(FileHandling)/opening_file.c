#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *ifp;

    ifp = fopen("my_file.txt", "r");
    if (ifp == NULL) {
        printf("Couldn't open a file.\n");
        exit(1);
    }

    if (fclose(ifp)) {
        printf("Failed to close a file.\n");
        exit(1);
    }
}
