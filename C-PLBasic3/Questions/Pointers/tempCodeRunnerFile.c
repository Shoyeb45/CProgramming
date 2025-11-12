#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    unsigned char *p = a, *q = b, temp;
    for (size_t i = 0; i < size; i++) {
        temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}



int main() {
  volatile int *reg = (int*)0x40021000;
  
}
