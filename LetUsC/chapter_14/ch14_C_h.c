/* Given an array p[5], write a function to shift it circularly left by two positions, Thus if the original array is {15,30,28,19,61} then after shifting it will be {28,19,61,15,30} call this function for 4 x 5 matrix and get its rows left shifted. */
#include<stdio.h> 
int main() 
{ 
int arr1[4][5]={2,4,5,3,6,7,8,1,4,7,9,5,6,4,6,3,4,6,7,9}; 
int i,j,arr2[4][5]; 
for(j=0;j<4;j++) 
{ 
for(i=0;i<5;i++) 
{ 
    if(i>=0&& i<3) 
    { 
        arr2[j][i+2]=arr1[j][i]; 
    } 
    if(i>2 && i<5) 
    { 
        arr2[j][i-3]=arr1[j][i]; 
    } 
} 
} 
for(i=0;i<4;i++) 
{ 
    for(j=0;j<5;j++) 
    { 
        printf("%d ",arr2[i][j]); 
    } 
 printf("\n"); 
} 
 
 
    return 0; 
}