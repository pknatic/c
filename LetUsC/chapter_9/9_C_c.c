/*
Write a function to compute the distance between two points and use it to develop another function that will compute the area of the triangle
whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use these functions to develop a function that returns a value of 1 if the point (x, y) lines
inside the triangle ABC, otherwise returns a value of 0
*/
#include<stdio.h>
#include<math.h>
float distance(int x1,int y1, int x2,int y2);
float area();
int main()
{
    int x1,x2,y1,y2;
    float z,x;
    printf("Enter the co-ordinates of two points: ");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    z=distance(x1,y1,x2,y2);
    printf("Distance between two points = %f\n",z);
    x=area();
    printf("Area of triangle = %f\n",x);
    return 0;
}
float distance(int x1,int y1,int x2,int y2)
{
    float m,d;
    m=pow((x2-x1),2)+pow((y2-y1),2);
    d=sqrt(m);
    return d;
}
float area()
{
    float 
}