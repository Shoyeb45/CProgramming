#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr;
    ptr = (float*) malloc(4 * sizeof(float));

    if(ptr == NULL){
        printf(" ");
        exit(0);
    }


}