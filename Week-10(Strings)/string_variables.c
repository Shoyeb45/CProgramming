#include<stdio.h>

int main() {
    char* s = "Please Enter your name\n";
    printf("%s", s);
    char name[100];
    scanf("%s", name);
    printf("Your name is %s\n", name);

    // Only read specific size
    scanf("%2s", name); // will only read 2 chars
    printf("%s\n", name); 
    return 0;
}