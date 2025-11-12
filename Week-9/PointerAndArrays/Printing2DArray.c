# include<stdio.h>

int main() {
    int a[][3] = {
        {1, 5, 6},
        {3, 4, 2},
        {0, 8, 7}
    };

    // printf("%d ", *(*a));
    // printf("%d", *(*(a + 1) + 2));

    printf("%d\n", *(*(a + 1) + 2));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }
}