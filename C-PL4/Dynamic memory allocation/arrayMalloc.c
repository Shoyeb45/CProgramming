//Write a c program to create and print an array of size n, where n is input from the user

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    float *p;
    printf("Enter the size of array:");
    scanf("%d",&n);
    p = malloc(n * sizeof(float));

if(p == NULL){
    printf("Failed to allocate memory.\n");
    exit(0);
}

for(int i=0 ;i<n ;i++){
    printf("Enter the element %d:",i+1);
    scanf("%f",p+i);
}

for(int i=0 ; i<n ; i++){
    printf("%.2f\t", *(p+i));
}
return 1;
}