#include<stdio.h>
#include<string.h>

int main() {
    char* str = "My name is Shoyeb\n";

    size_t n = strlen(str);
    printf("Size: %lu\n", n); 
    
    size_t mxn = strnlen(str, (size_t) 14);
    
    printf("Max Len: %lu\n", n); 

    char str1[10] = "Hello ";
    char str2[100] = "World";
    strcat(str1, str2);

    printf("%s", str1);
    printf("%s", str2);
    return 0;
}