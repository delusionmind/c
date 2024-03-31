/*#include<stdio.h> 

#include<conio.h> 

void main()

{

int max,i,*a[15],n; 

clrscr();

printf(“enter no. of element for the array: ”);

scanf(“%d”,&n);

printf(“enter element for the array: ”); 

for(i=0;i<n;i++)

scanf(“%d”,&*a[i]); 

max=*a[0]; 

for(i=1;i<n;i++)

{

if(max<*a[i]) 

max=*a[i];

}

printf(“maximum no= %d”,max);

 getch();

}*/


/*
    #include <stdio.h>
    
    max(int [],int);
    void main()
    {
    	int *a[]={10,5,45,12,19};
    	int n=5,m;
    	
    	m=max(a,n);
    	printf("\nMAXIMUM NUMBER IS %d",m);
    	
    }
    max(int *x[],int k)
    {
    	int t,i;
    	t=*x[0];
    	for(i=1;i<k;i++)
            {
    		if(*x[i]>t)
    			t=*x[i];
    	}
    	return(t);
    }

*/

#include <stdio.h>
void bigg(int *a[10],int *N);

int main()
{
    int a[10],i,N,p;
    printf("Enter the total number of elements in the array:\n");
    scanf("%d",&N);
    printf("Enter the elements in the array one by one:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    bigg(&a,&N);    
}

void bigg(int *a[10],int *N)
{
    int i,max;
    
    max = *a[0];
    
    for(i=0;i<*N;i++)
    {
        if( *a[i] > max)
        {
            max = *a[i];
        }
    }
    printf("The biggest element in the given array is: %d",max);    
}




