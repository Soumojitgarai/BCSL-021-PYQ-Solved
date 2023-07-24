//Write a program to perform the following on matrices of size (2 x 2) : 20
//C = A — B
#include<stdio.h>
void main () {
    int A[2][2],B[2][2],C[2][2];
    int i,j;
    printf("Enter elements of matrix A: \n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of matrix B: \n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            C[i][j]=0;
            C[i][j]+=A[i][j]-B[i][j];
        }
    }
    printf("C matrix is: \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++) {
            printf("%d",C[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}