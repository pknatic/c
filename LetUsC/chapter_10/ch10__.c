/* A positive integer is entered through the keyboard, Write a program to obtain the prime factor of the number. Modify the function suitably to obtain the prime factor recursively.*/
#include<stdio.h>
void prime(int,int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Prime factor of the number is ");
    prime(num,2);
    return 0;
}
void prime(int num,int i)
{
    if(i<=num)
    {
        if(num%i==0)
        {
            printf("%d",i);
            num=num/i;
        }
        else 
        {
            i++;
            prime(num,i);
        }
    }
}