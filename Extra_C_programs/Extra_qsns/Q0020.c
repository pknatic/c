/*
Write a program in C to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks.
   *
  ***
 *****
*/
#include<stdio.h>
int main()
{
   int i,j,space,raw,temp;
   printf("Enter the raw");
   scanf("%d",&raw);
   temp=raw;
   for(i=1;i<=raw;i++)
   {
      for(space=temp;space>=1;space--)
      {
         printf(" ");
      }
      temp--;
      for(j=1;j<=i;j++)
      {
      if(i%2!=0)
      printf("* ");
      }
      printf("\n");
   }
   return 0;
}