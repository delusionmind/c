/*2b Write a c program to find Fibonacci series using do-while statment */

#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,f3,f1=0,f2=1;
system("clear");

printf("  Enter The Number Of Terms:");
scanf("%d",&n);
	
printf("The Fibonacci Series is:");
printf("\n %d\n %d",f1,f2);

do
{
f3=f1+f2;
f1=f2;
f2=f3;
printf("\n %d",f3);
n--;
} 
while(n>2);

printf("\n");
}
