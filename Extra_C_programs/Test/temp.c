#include<stdio.h>
int main()
{
int i,j,a,b;
for(i=1;i<=20;i++)
{
    for(j=20;j>=i;j--)
    {
        printf("%d ",j);
    }
    printf("\n");
}
for (a=20;a>=1;a--)
{
    for (b=20;b>=a;b--)
    {
      printf("%d ",b);    
    }
    printf("\n");
}
    return 0;
}