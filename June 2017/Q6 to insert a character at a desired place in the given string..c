#include <stdio.h>  
#include <string.h>  
int main() {  
   char str[50] = "Hello, World!"; // Declare and initialize the string  
   char ch = '!';  
      strcat(str, &ch); // Append the character to the end of the string  
   printf("Updated string: %s", str);  
      return 0;  
}  
