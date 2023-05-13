/*
Ramanujan number (1729) is the smallest number that can be expressed as sum of two cubes in two different ways. 1729 can be expressed as 1^3 + 12^3 and 9^3 + 10^3. Write a program to print all such numbers up to a reasonable limit.
*/
#include<stdio.h>
int main()
{
    int i,num,x,y,count;
    int lmt;
    printf("Enter the limit = ");
    scanf("%d",&lmt);
    printf("Ramanujan numbers are between %d : \n",lmt);
    for(i=1;i<=lmt;i++)
    {   
        count=0;
        for(x=1;x*x*x<=i;x++)
        {
            for(y=x;x*x*x+y*y*y<=i;y++)
            {
                if(x*x*x+y*y*y==i)
                {
                    count++;
                }
            }            
        }        
        if(count==2)
        {
            printf("%d\n",i);
        }
        //pending code 
        // int k,j,m=0;
        // for(k=1;k*k*k<=i;k++)
        // {
        //     for(j=1;j*j*j<=i;j++)
        //     {
        //         if(k*k*k+j*j*j==i)
        //         {
        //             m++;
        //             if(m>1)
        //             printf("%d (%d,%d)\n",i,k,j);
                    

        //         }
        //     }
        // }
    }
    return 0;
}