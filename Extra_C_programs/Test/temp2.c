#include<stdio.h>
int main()
{
int i=1;
while(i<=500)
{
    printf("%d\n",i);
    if(i==250)
        break;
    i++;
}
    return 0;
}