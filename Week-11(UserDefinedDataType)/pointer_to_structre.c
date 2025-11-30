#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x;
    float y;
} Point;

int main() {
    Point *p = calloc(10, sizeof(Point));

    if (p == NULL) {
        printf("Failed to initialize memory for Point struct.\n");
        exit(1);
    }

    for (int i = 0; i < 10; i++) {
        printf("Enter point %d - (x y): ", i + 1);
        scanf("%f %f", &p[i].x, &p[i].y);
    }

    for (int i = 0; i < 10; i++) {
        printf("(x, y) = (%f, %f)\n", p[i].x, p[i].y);
    }

    free(p);
}
