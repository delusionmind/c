/*B8 Write a C program to read Matrix,Print digonal elements and find sum of diagonals*/

#include<stdio.h>
#include<stdlib.h>
 
int main()
{
int mat[10][10];
int i,j,row,col,sum=0;
system("clear");

printf("Enter the number of rows and columns for a matrix\n");
scanf("%d%d",&row,&col);

printf("Enter the elements of the matrix\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&mat[i][j]);
}
}   
 
printf("The matrix\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",mat[i][j]);
}
printf("\n");
}

printf ("The diagonal elements are\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(i==j)
{
printf("%d\t",mat[i][j]);
sum=sum+mat[i][j];
}
}
}
printf("\n");
printf("The sum of diagonal elements of a square matrix = %d\n",sum);
}
















