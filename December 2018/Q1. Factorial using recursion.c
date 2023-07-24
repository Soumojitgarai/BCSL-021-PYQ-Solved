//Write a C program to find factorial of a given number, using Recursion
#include <stdio.h>
int factorial(int n) {
    if (n==1||n==0) {
        return 1;
    } else {
        return factorial (n-1)*n;
    }
}
int main () {
    int n;
    printf("Give your useless number: ");
    scanf("%d",&n);
    printf("Here is your mythical number: %d", factorial(n));
    getch();
    return 0;
}