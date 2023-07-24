//Write an interactive C program to remove the duplicates in a given
//word (string) and display the individual characters with a comma
//delimiter

#include <stdio.h>
#include <string.h>
void main () {
    char str[1000];
    int len;
    int i,j,k;
    printf("Enter your string: ");
    gets(str);
    len =strlen(str);
    for (i=0;i<len;i++) {
        for (j=i+1;str[j]!='0';j++) {
            if (str[j]==str[i]) {
                for(k=j;str[k]!='\0';k++) {
                    str[k]=str[k+1];
                }
            }
        }
    }
    printf("Final string after removing duplicates: %s",str);
    getch();
    return 0;
}