#include<stdio.h>

int main() {
    int a[] = {3, 4, 2};

    printf("%d\n", *a);
    int *d = a;

    for (int *d = a; *d <= *a + 2; *d++) {
        printf("%d ", *d);
    }
    return 0;
}