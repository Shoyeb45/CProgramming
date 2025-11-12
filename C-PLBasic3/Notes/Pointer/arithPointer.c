#include<stdio.h>

int main() {
    int a = 123;
    int *p = &a;
    int *q = p + 3;
    
    printf("%d\n", p);
    printf("%d\n", q);
    printf("%d", q - p);
}
