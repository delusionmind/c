/*b6. Program to find smallest and largest number in one dimensional array*/ 
 
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,large,small,n,a[10];
system("clear");
printf("How many no's\n");
scanf("%d",&n);
printf("Enter the  numbers \n");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
large=a[0];
small=a[0];

for (i=0;i<n;i++)
{
	if (a[i]>large)
	{
	large=a[i];
	}
	else
	if (a[i]<small)
	{
	small=a[i];
	}
}

printf("Largest element in an array = %d\n", large);
printf("Smallest element in an array = %d\n",small);

}


