/*
When interest compounds q times per year at an annual rate of r % for n years, the principal p compounds to an amount a as per the following
formula a = p (1 + r / q) nq
Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float p,n,r,q,a;
	int i;
	for(i=1;i<=10;i++)
	{
		printf("Enter the principle amount = ");
		scanf("%f",&p);
		printf("Enter the rate of interest = ");
		scanf("%f",&r);
		printf("Enter the number of years  = ");
		scanf("%f",&n);
		printf("Enter the compounding period = ");
		scanf("%f",&q);
		a = p * pow((1+(r/q)),(n*q));
		printf("Amount = %f\n",a);
	}	
	return 0;
}