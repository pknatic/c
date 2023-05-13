#include<stdio.h>
int main()
{
int user_pic,computer_pic,i=1,num=21;
while(num>1)
{
printf("Enter the number between 1,2,3 or 4 :");
scanf("%d",&user_pic);
computer_pic=5-user_pic;
num=num-(user_pic+computer_pic);
if(num==1)
{
    printf("You lose the game");
}
}
   return 0;
}