#include<stdio.h>
void fact(int);
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    fact(num);
    return 0;
}
void fact(int num)
{
    int i,j=2,f;
    for(i=1;num>1;i++)
    {
        if(num%j==0)
        {
            f=num%j;
            num=num/j;
            printf("%d ",j);
        }
        else
        j++;
    }
}