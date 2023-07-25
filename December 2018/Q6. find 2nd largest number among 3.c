//Write a C program to find the second largest number among 3 numbers given as input
#include <stdio.h>
int test(int a, int b, int c)
{
    if ((a>=b && a<=c)||(a<=b && a>=c)) {
        return 1;
    } 
    else {
        return 0;
    }
}
int main() {
        int a,b,c;
        printf("Enter numbers: ");
        scanf("%d %d %d",&a,&b,&c);
        printf("\n The 2nd largest no. is: ");
        if(test(a,b,c)) {
            printf("%d",a);
        } else if (test(b,a,c)) {
            printf("%d",b);
        } else {
            printf("%d",c);
        }
    getch();
    return 0;
}