#include<stdio.h>
#include<stdlib.h>

/* Start with an array of size n, then ask user if they want to “expand”.
If yes → use realloc to increase size → take more input. */


int main() {
    unsigned n;
    scanf("%u", &n);
    int* p = (int*) calloc(n, sizeof(int));

    if (p == NULL) {
        printf("Failed to allocate memory");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Do you want to expand the array, yes(1) or no(0):");
    int response;
    scanf("%d", &response);
    if (response) {
        printf("Enter the new size:\n");
        unsigned new_size;
        scanf("%u", &new_size);
        if (new_size <= n) {
            printf("The new size should be greater tha n(%d\n)", n);
            return 0;
        }

        int *tmp = (int*) realloc(p, new_size * sizeof(int));
        if (tmp == NULL) {
            printf("Failed to expand the array.");
            goto END;
        } else {
            p = tmp;
        }

        printf("Enter new elements:\n");
        for (int i = n; i < new_size; i++) {
            scanf("%d", p + i);
        }
        n = new_size;
    }
END:
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    free(p);
    return 0;
}