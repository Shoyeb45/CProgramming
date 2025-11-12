#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int *p = (int *) malloc(n * m * sizeof(int));
    if (p == NULL) {
        printf("Failed to allocate memory");
        return 1;
    }

    for (int i  = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", (p + i * m + j));
        }
    }
    
    for (int i  = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", *(p + i * m + j));
        }
        printf("\n");
    }
}