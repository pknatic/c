#include<stdio.h>
#define ISUP(x) {\
    if(x%2==0)\
    printf("Even");\
    }
int main()
{
int i=2;
ISUP(i);
int c = 4;
ISUP(c);
return 0;

}