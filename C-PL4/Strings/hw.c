//Function to count the number of character and word in given string( characters without spaces)

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int numberCharacters(char a[]){
    int count = 0;
    for(int i=0; a[i]!='\0' ; i++){
        if(isspace(a[i]) == 0)
        count++;
    }
    return count;
}

int numberWord(char a[]){
    int j=0;
    int count = 1;
    for(int i=0;  a[i]!='\0'  ; i++){
        if(isspace(a[i])){
            while(isspace(a[j])){
                ++j;
                }
                ++count;
        }
    }
    return count;
}
int main()
{
    char a[20];
    printf("Enter the string:");
    gets(a);
    printf("Number of characters in the string %d",numberCharacters(a));
    printf("\nNumber of words in the string %d",numberWord(a));
}