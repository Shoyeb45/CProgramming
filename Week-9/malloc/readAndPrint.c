#include<stdio.h>
#include<stdlib.h>

int main() {
    unsigned n;
    scanf("%u", &n);

    int *p = (int*) malloc(n * sizeof(int));
    if (p == NULL) {
        printf("Failed to allocate memory for the array.");
        return 1;
    } 
    printf("Default values\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\nInsert elements\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    free(p);
    // p -> dangling pointer
    return 0;
}