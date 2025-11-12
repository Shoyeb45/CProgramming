#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = 4;
    int *p = (int*) malloc(n * sizeof(int));

    if (p == NULL) {
        return 1;
    }
    for (int i = 0; i < 4; i++) {
        scanf("%d", p + i);
    }
    int *temp = (int*) realloc(p, 2 * sizeof(int));
    for (int i = 0; i < 4; i++) {
        printf("%d ", *(p + i));
    }
}