//Write a C program, using appropriate user defined functions and a switch 
//statement (to select the choice of operation) to perform Addition, Subtraction, 
//Division operations on given 2 matrices of size 2 x 2.

#include<stdio.h>
void main () {
    int i,j;
    int A[2][2],B[2][2];
    int result[2][2];
    int opt;
    
    printf("Enter elements of A: ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of B: ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&B[i][j]);
        }
    }

    printf("Enter your operation \n");
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for division\n");

    scanf("%d",&opt);

    switch(opt) {
        case 1:
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                result[i][j]=A[i][j]+B[i][j];
            }
        }
        printf("The addition of the matrix is: ");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("%d",result[i][j]);
            }
            printf("\n");
        }
        break;


        
        case 2:
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                result[i][j]=A[i][j]-B[i][j];
            }
        }
        printf("The subtraction of the matrix is: ");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("%d",result[i][j]);
            }
            printf("\n");
        }
        break;



        case 3:
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                result[i][j]=A[i][j]/B[i][j];
            }
        }
        printf("The division of the matrix is: ");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("%d",result[i][j]);
            }
            printf("\n");
        }
        break;

        default:
        printf("Syntax ERROR !");
        break;
    }

    getch();
    return 0;
}