#include<stdio.h>

int main() {
    char d[123];
    // scanf("%[sa ]", d); // read as long as s, a or '  is coming
    printf("%s\n", d);

    
    scanf("%[^\n]", d);  // read as long as \n not encountered
    printf("%s\n", d); 
    return 0;
}