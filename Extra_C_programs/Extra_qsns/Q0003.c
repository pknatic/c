/*
Write a C program to find the sum of first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
*/
#include<stdio.h>
int main()
{
    int sum,i;
    printf("Numbers = ");
    for(i=1,sum=0;i<=10;i++)
    {        
        sum=sum+i;
        printf(" %d",i);
    }
    printf("\nSum Of All Numbers = %d\n",sum);
    return 0;
}