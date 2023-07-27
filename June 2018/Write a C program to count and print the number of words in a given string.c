//Write a C program to count and print the number of words in a given string.

#include<stdio.h>
#include<string.h>
void main () {
    char str[100];
    int len=0;
    printf("Enter your string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++) {
        if(str[i]==' '&&str[i+1]!=' ') {
            len++;
        }
    }
    printf("Total number of words in the string '%s' is: %d", str,len+1);
    getch();
    return 0;
}