#include<stdio.h>
int main()
{
    int i=3;
    int *j=&i;
    printf("%d\n",i);
    printf("%p\n",&i);
    printf("%p\n",j);
    printf("%d\n",*j);
    return 0;
}