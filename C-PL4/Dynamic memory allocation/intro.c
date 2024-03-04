//Create an integer pointer and allocate 10 integer memory locations.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    p = (int*) malloc(10 * sizeof(int));

    if(p == NULL){
        printf("Memory allocation failed.\n");
        exit(1); //Terminate the function currently running
    }
    return 1;
}