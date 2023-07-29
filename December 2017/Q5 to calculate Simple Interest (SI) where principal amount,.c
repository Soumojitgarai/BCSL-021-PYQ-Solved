#include <stdio.h>
 
int find_anagram(char [], char []);
 
int main()
{
    char array1[100], array2[100];
    int flag;
 
    printf("Enter the string\n");
    gets(array1);
    printf("Enter another string\n");
    gets(array2);
    flag = find_anagram(array1, array2);
    if (flag == 1)
        printf("%s and %s are anagrams.\n", array1, array2);
    else
        printf(" %s and %s are not anagrams.\n", array1, array2);
    return 0;
}
 
