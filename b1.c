 /*1.Write a C program to find the roots of a quadratic equation using if else statement*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
float A, B, C, root1, root2;
float realp, imagp, disc;
system("clear");
printf("Enter the values of A, B and C\n");
scanf("%f %f %f", &A,&B,&C);
disc = B*B - 4.0*A*C;
if(disc < 0)
{
printf("Imaginary Roots\n");
realp = -B/(2.0*A) ;
imagp = sqrt(disc)/(2.0*A);
printf("Root1 = %f +i %f\n",realp, imagp);
printf("Root2 = %f -i %f\n", realp , imagp);
}
else  if(disc == 0)
{
printf("Roots are real and equal\n");
root1 = -B/(2.0*A);
root2 = root1;
printf("Root1 = %f \n",root1);
printf("Root2 = %f \n",root2);
}
else if(disc > 0 )
{
printf("Roots are real and distinct\n");
root1 =(-B + sqrt(disc))/(2.0*A);
root2 =(-B - sqrt(disc))/(2.0*A);
printf("Root1 = %f \n",root1);
printf("Root2 = %f \n",root2);
}
}


