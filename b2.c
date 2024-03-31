/*2a Write a C program to check enterd numbers is ZERO,POSITIVE or NEGATIVE and find sum of positive and negative for given N numbers using while and if statement*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i=0,num,psum=0,nsum=0;
system("clear");
printf("Enter how many numbers\n ");
scanf("%d",&n);

printf("Enter %d numbers",n);
while(i<n)
{
scanf("%d",&num);
if(num==0)
printf("the number is Zero\n");
else if(num>0)
{
printf("the number is positve=%d\n",num);
psum=psum+num;
}
else 
{
printf("the number is negative=%d\n",num);
nsum=nsum+num;
}
i++;	
}
printf("The sum of positive numbers= %d\n",psum);
printf("The sum of negative numbers =%d\n",nsum);
}
			
				
