#include<stdio.h>
void main()
{
int A[3][3],B[3][3],C[3][3],D[3][3],I,J,K;
clrscr();
printf(“ENTER 3X3 MATRIX A VALUES\n”);
for(I=0;I<3;I++)
{
for(J=0;J<3;J++)
{
scanf(“%d”,&A[I][J]);
}
}
printf(“ENTER 3X3 MATRIX B VALUES\n”);
for(I=0;I<3;I++)
{
for(J=0;J<3;J++)
{
scanf(“%d”,&B[I][J]);
}
}
printf(“ENTER 3X3 MATRIX C VALUES\n”);
for(I=0;I<3;I++)
{
for(J=0;J<3;J++)
{
scanf(“%d”,&C[I][J]);
}
}
for(I=0;I<3;I++)
{
for(J=0;J<3;J++)
{
D[I][J]=0;
for(K=0;K<3;K++)
{
D[I][J]=D[I][J]+A[I][K]*B[K][J];
}
D[I][J]=D[I][J]+C[I][K];
}
}
printf(“RESULT 3X3 MATRIX D VALUES ARE :\n”);
for(I=0;I<3;I++)
{
for(J=0;J<3;J++)
{
printf(“%d\t”,D[I][J]);
}
printf(“\n”);
}
getch();
}
