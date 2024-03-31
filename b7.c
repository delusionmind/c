/*b7 Write a C program to perform linear search and find position using array */

#include<stdio.h>
#include<stdlib.h>
  
int main()
{
int a[20],i,key,n,found=0;
system("clear");
printf("Enter how many elements?\n");
scanf("%d",&n);
     
printf("Enter array elements:n\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
     
printf("\nEnter element to search:\n");
scanf("%d",&key);
     
for(i=0;i<n;i++)
{
if(a[i]==key)
{
found=1;
break;
}
}
if(found==1)
{
printf("Element is %d found at position %d\n",key,i);
}

else
printf("Element not found\n");

} 
   




