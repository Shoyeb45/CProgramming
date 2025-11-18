#include<stdio.h>
#include<ctype.h>

int main() {
    char ch = 'a';
    if (isalpha(ch)) {
        printf("%c is Alphabet\n", ch);
    }
    ch = ' ';
    if (isspace(ch)) {
        printf("%c is Space\n", ch);
    }
    ch = '0';
    if (isalnum(ch)) {
        printf("%c is Alpha Numeric\n", ch);
    }
    
    if (isdigit(ch)) {
        printf("%c is Digit\n", ch);
    }
    ch = 'A';
    printf("Lower case of %c is %c\n", ch, tolower(ch));

    
    ch = 'a';
    printf("Upper case of %c is %c\n", ch, tolower(ch));


    return 0;
}