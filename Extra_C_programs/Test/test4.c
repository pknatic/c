/*
Write a program to generate all Pythagorean Triplets with side length less than or equal to 30.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int l,b;
    float h;
    for(l=1;l<=30;l++)
    {
        for(b=1;b<=30;b++)
        {
            h=sqrt((l*l)+(b*b));
            if(h==(int)h)
            {
                printf("(%d,%d,%d)\n",l,h,b);
            }
        }
    }
    return 0;
}