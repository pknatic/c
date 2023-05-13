#include<stdio.h>
#include "test8.c"
void fun();
void new_fun();
int main()
{
    int num,i,fact=1;
    extern int x;
    printf("This program will give the factorial value of a given number\n");
    printf("Enter the number : ");
    scanf("%d",&num);
    x=x*x;
    printf("Externa number  : %d\n",x);
    fun();
    for(i=1;i<=num;i++)
    {
        fact = fact * i;
    }
    printf("Factorial of the number = %d",fact);
    printf("local value =  %d\n",x);
    new_fun();
    printf("local value =  %d\n",x);
    return 0;
}
void fun()
{
    printf("call byfun %d\n",x);
}
void new_fun()
{
    x=x*2;
    printf("new x value = %d",x);
}
