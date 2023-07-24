//Write a C program to count the no. of vowels in a given string and display all the vowels in it separately
#include<stdio.h>
int vowel(char c) {
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
}
void main () {
    char str[100];
    int vowel_count[5]={0};
    int i;
    printf("Enter your string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++) {
        if(vowel(str[i])){
            switch(str[i]){
                case 'a':
                case 'A':
                    vowel_count[0]++;
                    break;
                case 'e':
                case 'E':
                    vowel_count[1]++;
                    break;
                case 'i':
                case 'I':
                    vowel_count[2]++;
                    break;
                case 'o':
                case 'O':
                    vowel_count[3]++;
                    break;
                case 'u':
                case 'U':
                    vowel_count[4]++;
                    break;
            }
        }
    }
    printf ("The vowel count in this stupid sentence is: \n");
    printf ("Number of A's: %d \n",vowel_count[0]);
    printf ("Number of E's: %d \n",vowel_count[1]);
    printf ("Number of I's: %d \n",vowel_count[2]);
    printf ("Number of O's: %d \n",vowel_count[3]);
    printf ("Number of U's: %d \n",vowel_count[4]);

    getch();
    return 0;
}