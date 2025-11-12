#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;  
    *a = *b;
    *b = temp;
}
void reverse(int *a, size_t n) {
    for (int i = 0; i < n / 2; i++) {
        swap(a + i, a + (n - i - 1));
    }    
}

int main() {
    int a[] = {1, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);
    reverse(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}