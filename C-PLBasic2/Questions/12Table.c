#include<stdio.h>

void main()
{
    int n , sum =0;
    printf("Enter the value of n(number of terms):");
    scanf("%d",& n);

    for (int i=12 ; i<=(12*n) ; i+=12){
        sum=sum+i;

        printf("%d ",i);
    }
    printf("\n%d", sum);
}
