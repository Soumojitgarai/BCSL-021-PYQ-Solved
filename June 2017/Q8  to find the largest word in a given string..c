#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
 char string[100], longest[30];
 int count = 0, max = 0,i,j,index=0,length;
 clrscr();
 printf("Enter Sentence:\n");
 gets(string);
 length = strlen(string);
 index=0;
 /* Finding length of longest word and starting index */
 for( i = 0 ; i< length ; i++)
 {
  if(string[i] != ' ')
  {
   count++;
  }
  else
  {
   if(count > max)
   {
    max = count;
    index = i-max;
   }
   count = 0;
  }
 }
 /* Checking if last word is longest */
 if(count>max)
 {
  max = count;
  index = length-max;
 }
 /* Using length and index copying longest word */
 j=0;
 for(i=index;i< index+max;i++)
 {
  longest[j] = string[i];
  j++;
 }
 /* Inserting NULL character to terminate string */
 longest[j] = '\0';
 printf("Longest word is: %s\n", longest);
 printf("And its length is: %d",max);
 getch();
 return 0;
}
