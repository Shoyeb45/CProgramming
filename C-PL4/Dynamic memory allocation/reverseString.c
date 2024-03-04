#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(int n){
    char *ptr;
    int i;
    ptr = malloc(n*sizeof(char));
    if(ptr ==NULL){
        printf(" ");
        exit(0);
    }
    printf("Enter the string:");
    scanf("%s",ptr);
    for(i=n-1 ; i>=0 ; i--){
        printf("%c",*(ptr+i));
    }

    free(ptr); //in last free the memory allocation

}
int main()
{
    printf("Enter the size of string:");
    int n; 
    scanf("%d",&n);

    reverse(n);
    
    return 0;
}