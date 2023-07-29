//Write a C program to find and display the product of "n" numbers given as input. 

#include<stdio.h>
#include<math.h>
void main () {
    int i,n,num;
    int prod=1;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&num);
        prod*=num;
    }
    printf("Product of %d numbers are: %d",n,prod);
    getch();
    return 0;
}