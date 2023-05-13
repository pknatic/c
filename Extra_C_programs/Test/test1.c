#include<stdio.h>
int main()
{
int i = 1, j;
float fact,sum = 0.0;
for (i = 1; i <= 7; i++)
{
fact = 1.0;
for (j = 1; j <= i; j++)
fact = fact * j;
printf("Fact=%f\n",fact);
sum = sum + i / fact;
printf("Sum = %f\n",sum);
}
printf ("Sum of series = %f\n", sum);
return 0;
}//