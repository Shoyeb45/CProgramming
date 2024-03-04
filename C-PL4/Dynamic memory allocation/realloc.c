// Write a program that accepts an initial number of floating point numbers from
// the user and later allows the user to expand the array to add more elements.
// [use realloc() for dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);

    float *ptr;
    ptr = malloc(n*sizeof(float)); //allocating size of the pointer

    for(int i=0; i<n ; i++){
        printf("Enter the element %d:",i+1); //Taking input
        scanf("%f",& *(ptr+i));
    }
    printf("Your array is:");
    for(int i=0; i<n ; i++){
        printf("%.3f  ",*(ptr+i));  //printing 
    }

    int decision;
    printf("\nDo you want to add extra elements, Yes(1) and No(0):");
    scanf("%d",&decision);
    int n2;
    
    if(decision == 1){
        printf("\nEnter the additional size of an array:");
        scanf("%d",&n2);

       ptr =  realloc(ptr, n2*sizeof(float)); //Reallocate the memory

        if(ptr != NULL){
            printf("\nEnter more memory:\n");

            for(int i=n ; i<n2+n ; i++){
                printf("Enter element %d:",i+1); //again taking input , we can also use []
                scanf("%f",&ptr[i]);
            }
}
            for(int i=0; i<n+n2 ; i++){
        printf("%.3f  ",*(ptr+i)); //final print
    }
    }else{
        printf("Thank you");
    }
    return 1;
}