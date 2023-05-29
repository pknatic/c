// // #include<stdio.h>
// // #define PRODUCT(x) (x*x)
// // int main()
// // {
// // 	int i=1,j,k,l;
// //     printf("%d\n",i);
// // 	j=PRODUCT(i+1);
// // 	k=PRODUCT(i++);
// // 	l=PRODUCT(++i);
// // 	printf("%d\n",j);
// // 	printf("%d\n",k);
// // 	printf("%d\n",l);
// // 	return 0;
// // }

// // #include<stdio.h>
// // int main()
// // {
// // 	int arr[5],i;
// // 	for(i=0;i<=6;i++)
// // 	{
// // 		printf("Enter data ");
// // 		scanf("%d",&arr[i]);
// // 	}
// // 	for(i=0;i<=7;i++)
// // 	{
// // 		printf("%d\n",arr[i]);
// // 	}
// // 	return 0;
// // }

// #include<stdio.h>
// void display1(int);
// void display2(int*);
// int main()
// {
// 	int i;
// 	int marks[] = {55,65,75,56,78,98,78 };
// 	for(i=0;i<=6;i++)
// 	display1(marks[i]);
// 	printf("\n");
// 	for(i=0;i<=6;i++)
// 	display2(&marks[i]);
// 	return 0;
// }
// void display1(int m)
// {
// 	printf("%d ",m);
// }
// void display2(int*m)
// {
// 	printf("%d ",*m);
// }

// #include<stdio.h>
// int main() {
//     // int numbers[5] = { 1, 2, 3, 4, 5 };
//     // for(int i=0;i<=4;i++)
//     // {
//     //     printf("%d ",i[numbers]);
//     // }
//     double i;
//     printf("%f",sizeof(i));
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     long long int intType;
//     long double floatType;
//     double doubleType;
//     char charType;

//     // sizeof evaluates the size of a variable
//     printf("Size of int: %zu bytes\n", sizeof(intType));
//     printf("Size of float: %zu bytes\n", sizeof(floatType));
//     printf("Size of double: %zu bytes\n", sizeof(doubleType));
//     printf("Size of char: %zu byte\n", sizeof(charType));

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,i;
//     printf("Enter the size of array = ");
//     scanf("%d",&a);
//     int arr[a];
//     for(int j=0;j<=4;j++)
//     {
//         scanf("%d",&arr[a]);
//     }
//     printf("%d\n",arr[0]);
//     printf("%d\n",arr[1]);
//     printf("%d\n",arr[2]);
//     printf("%d\n",arr[3]);
//     printf("%d\n",arr[4]);
//     // for(i=0;i<=4;i++)
//     // {
//     //     printf("%d ",arr[i]);
//     // }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n, i, *arr;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     arr = (int*)malloc(n*sizeof(int));

//     printf("Enter the elements of the array:\n");
//     for(i = 0; i < (n+1); i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("The elements of the array are:\n");
//     for(i = 0; i < (n+1); i++) {
//         printf("%d ", arr[i]);
//     }
//     free(arr);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j;
//     int arr[5] = {1,2,3,4,5};
//     int arr2[5];
//     printf("Actual Values");
//     for(int y=0;y<=4;y++)
//     {
//         printf("%d ",arr[y]);
//     }
//     for(i=4,j=0;j<=4,i>=0;j++,i--)
//     {
//         arr2[j]=arr[i];
//     }
//     printf("\nReversed Values ");
//     for(int x=0;x<=4;x++)
//     {
//         printf("%d ",arr2[x]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i;
//     double a;
//     printf("%u\n",&i);
//     printf("%u",&a);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int a=5,b=2;
//     int c;
//     c=pow(a,b);
//     printf("%d",c);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int arr[3][3] = {{10,20,30},{99,98,97},{50,60,70}};
//     printf("%d %d %d \n",arr[0][0],arr[0][1],arr[0][2]);
//     printf("%d %d %d \n",arr[1][0],arr[1][1],arr[1][2]);
//     printf("%d %d %d \n",arr[2][0],arr[2][1],arr[2][2]);
//     printf("%d %d %d \n",*&arr[0][0],*&arr[0][1],*&arr[0][2]);
//     printf("%d %d %d \n",*&arr[1][0],*&arr[1][1],*&arr[1][2]);
//     printf("%d %d %d \n",*&arr[2][0],*&arr[2][1],*&arr[2][2]);
//     printf("%d %d %d \n",**arr,*(*arr+1),*(*arr+2)); // we can write **arr instead of *(*arr+0)
//     printf("%d %d %d \n",arr[0][0]+1,*arr,*arr+1);
//     return 0;
// }

// #include<stdio.h>
// void fun(int );
// int main()
// {
//     int arr[5] = {1,2,3,4,5},i;
//     for(i=0;i<5;i++)
//     {
//         fun(arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j=25;
//     int *pi,*pj = &j;
//     *pj = j+5;
//     printf("%d \n",*pj);
//     i = *pj + 5;
//     printf("%d \n",i);
//     pi = pj;
//     printf("%d \n",pj);
//     printf("%d \n",*pj);
//     *pi = i+j;
//     printf("%d \n",*pi);
//     printf("%d \n",*(pi+2));
//     return 0;
// }

#include<stdio.h>
int main()
{
    int x[3][5] = {1,2,3,4,5,6,7,8,1,2,3,4,5,6,7},*n;
    n = x[0];
    printf("%d\n",*n); 
    printf("%d\n",*(*(x+2)+1)); 
    return 0;
}