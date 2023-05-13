#include<stdio.h>
int main()
{
int i,n,num,sum;
printf("Enter how many numbers you want to enter ");
scanf("%d",&n);
for(i=1,sum=0;i<=n;i++)
{
    printf("Enter the number = ");
    scanf("%d",&num);
    sum=sum+num;
    printf("sum till = %d\n",sum);
    
}
printf("Sum of all entered numbers = %d",sum);
    return 0;
}