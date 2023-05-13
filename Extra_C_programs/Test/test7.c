#include<stdio.h>
void checkleap(int);
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    checkleap(year);
    return 0;
    
}
void checkleap(int year)
{
    if(year%100==0)
    {
        if(year%400==0)
        printf("Leap year");
        else
        printf("non leap year");
    }
    else
    {
        if(year%4==0)
        printf("Leap year");
        else
        printf("Non Leap year");
    }   
}
