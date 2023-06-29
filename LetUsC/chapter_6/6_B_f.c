/*
population of a town today is 100000. The population has increased steadily at the rate of 10 % per year for last 10 years. Write a program to determine the population at the end of each year in the last decade.
*/
#include<stdio.h>
int main()
{
    int i,pop=100000,newp;
    newp = pop;
    for(i=1;i<=10;i++)
    {
        pop=(newp*10)/100;
        newp = newp-pop;
        printf("Population on last year %ds = %d \n",i,newp);

    }
    return 0;
}