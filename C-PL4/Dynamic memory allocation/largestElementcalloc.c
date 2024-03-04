#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    float *p = (float*) calloc(n, sizeof(float)), max = 0.0;

    for(int i=0; i<n; i++){
        printf("Enter the element:");
        scanf("%f", p);

        if(*p > max)
        max = *p;
    }

    printf("Max is:%.3f",max);
}