#include<stdio.h>
#include<stdlib.h>
void binary (int);
void main()
{
int num;
system("clear");
printf("\nEnter The Number: ");
scanf("%d",&num);
binary(num);
}
/*function to convert deciaml to binary*/
void binary (int n)
{
int r;
r=n%2;
n=n/2;
if (n==0)
{
printf("\nThe binary equivalent of number is=\n");
}
else
binary(n);
printf("%d",r);
}


