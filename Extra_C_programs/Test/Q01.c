/*find the range of a set of numbers entered through the keyboard. Range is the difference between the smallest and biggest number in the list.*/
#include<stdio.h>
int main()
{
int i,num,max,min,how,range;
printf("Enter the numbers that you want to enter ");
scanf("%d",&how);
printf("Enter the number ");
    scanf("%d",&num);
    max=min=num;
for(i=1;i<=how;i++)
{
    printf("Enter the number ");
    scanf("%d",&num);
    if(num<max)
    max=num;
    if(num<min)
    min=num;
}
range=max-min;
printf("\n\n%d is the range of the data.",range);

    return 0;
}