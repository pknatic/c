// #include<stdio.h>
// #define PRODUCT(x) (x*x)
// int main()
// {
// 	int i=3,j,k,l;
// 	j=PRODUCT(i+1);
// 	k=PRODUCT(i++);
// 	l=PRODUCT(++i);
// 	printf("%d\n",i);
// 	printf("%d\n",j);
// 	printf("%d\n",k);
// 	printf("%d\n",l);
// 	return 0;
// }


// #include<stdio.h>
// int fun(int x)
// {
// 	x=x*x;
// 	return x;
// }
// #define PRODUCT(x) (x*x)
// int main()
// {
// 	int i=3,j,k,l;
// 	printf("%d\n",i);
// 	j=fun(i+1);
// 	k=fun(i++);
// 	l=fun(++i);
// 	printf("%d\n",i);
// 	printf("%d\n",j);
// 	printf("%d\n",k);
// 	printf("%d\n",l);
// 	printf("\n");

// 	int a=3,b,c,d;
// 	b=PRODUCT(a+1);
// 	c=PRODUCT(a++);
// 	d=PRODUCT(++a);
// 	printf("%d\n",a);
// 	printf("%d\n",b);
// 	printf("%d\n",c);
// 	printf("%d\n",d);	
// 	return 0;
// }


// #include<stdio.h>
// #define MAX 10

// void lAdd(int *l, int *q, int *r, int num);
// void rAdd(int *l, int *q, int *r, int num);
// void show(int *q, int *rside);
// int rFetch(int *l, int *q, int *r);
// int lFetch(int *l, int *q, int *r);

// int main()
// {
// 	int que[MAX];
// 	int left, right;
// 	left = right = -1;

// 	rAdd(&left, que, &right, 10);
// 	rAdd(&left, que, &right, 20);
// 	rAdd(&left, que, &right, 30);
// 	show(que, &right);

// 	lAdd(&left, que, &right, 5);
// 	show(que, &right);

// 	lFetch(&left, que, &right);
// 	show(que, &right);

// 	rFetch(&left, que, &right);
// 	show(que, &right);
// 	return 0;
// }

// /*Insertion from right*/
// void rAdd(int *lside, int *q, int *rside, int num)
// {
// 	if (*rside == MAX - 1)
// 	{
// 		printf("\nDequeue is full, no more insertion is possible.\n");
// 		return;
// 	}

// 	if (*rside == -1)
// 		*rside = 0;
// 	else
// 		(*rside)++;
// 	q[*rside] = num;
// }

// /*Insertion from left*/
// void lAdd(int *lside, int *q, int *rside, int num)
// {
// 	int i;

// 	if (*rside == MAX - 1)
// 	{
// 		printf("\nDequeue is full, no more insertion is possible.\n");
// 		return;
// 	}

// 	for (i = *rside; i >= 0; i--)
// 		q[i+1] = q[i];

// 	q[0] = num;

// 	if (*lside == -1)
// 		*lside = 0;
// 	(*rside)++;
// }

// /*Displays the list*/
// void show(int *q, int *rside)
// {
// 	int i;

// 	printf("\n\nList\n");
// 	for (i = 0; i <= *rside; i++)
// 		printf("%d\t", q[i]);
// 	printf("\n\n");
// }

// /*Retrieval from left*/
// int lFetch(int *lside, int *q, int *rside)
// {
// 	int item = q[0], i;
// 	if (*rside == -1)
// 	{
// 		printf("\nList is empty.\n");
// 		return 0p;
// 	}

// 	for (i = 0; i < *rside; i++)
// 		q[i] = q[i + 1];

// 	(*rside)--;
// 	return item;
// }

// /*Retrieval from right*/
// int rFetch(int *lside, int *q, int *rside)
// {
// 	if (*rside == -1)
// 	{
// 		printf("\nList is empty.\n");
// 		return 0;
// 	}
// 	int item = q[*rside];
// 	(*rside)--;
// 	return item;
// }



// #include<stdio.h>
// void fun(int arr[],int n)
// {
// 	int i;
// 	for(i=0;i<n;i++)
// 	{
// 		printf("%d ",arr[i]);
// 	}
// }
// int main()
// {
// 	int a=6;
// 	int arr[6]= {1,4,15,4,5,6};
// 	fun(arr,a);
// 	return 0;
// }
// #include <stdio.h>
// void print_array(int arr[], int size) {
//     printf("The array has %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr1[] = {1, 2, 3, 4, 5};
//     int size1 = sizeof(arr1) / sizeof(arr1[0]);
//     print_array(arr1, size1);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	int arr[]= {1,2,3,4,5,12,31,32,234,235,2345,41,234,235,235,534,534,253,345,345,345,346,2,234,345,346,346,346,23,235};
// 	int size = sizeof(arr) / sizeof(arr[0]);
// 	printf("%d",sizeof(arr));
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int arr[3][2]={2,4,6,8,10,12};
//     int *p;
//     p = arr[0];
//     // printf("%d\n",p);
//     // printf("%d\n",*p);
//     p = arr[0]+2;
//     printf("%u\n",arr[1]+1);
//     printf("%d\n",*p);
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
// bool isProgrammingFun = true;
// bool isFishTasty = false;

// printf("%d\n", isProgrammingFun);
// printf("%d\n", isFishTasty); 
    
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int year=0, invest, alternate;

//     while(alternate>invest)
//     {
//         year++;  //year = year + 1;

//         // yearly produce income form alternate solution
//         // 9 % of 1000 = 90
//         alternate = year * 90;

//         // yearly produced income from machine
//         // 1000 per year - [6000(machine cost) - 2000(salvage or scrap value of machine)]
//         // 1000 * year - [6000-2000]
//          invest = (1000*year) - 4000;

//     }

//     printf("The Life of Machine: %d years", year);
//     return 0;
// }


// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int main()
// {
//     float p,n,r,q,a;
//     int i;
//     //for 10 sets we have to create a for loop
//     for(i=1;i<=10;i++)
//     {
//         printf("Set: %d\n",i);
//         //accept the values from user
//         printf("Enter Principle: ");
//         scanf("%f",&p);
//         printf("Enter Rate: ");
//         scanf("%f",&r);
//         printf("Enter Time(in year): ");
//         scanf("%f",&n);
//         printf("Enter Compound Interest: ");
//         scanf("%f",&q);

//         //formula
//         a = p*(pow((1+r/q),n*q));
//         printf("Amount: %.2f\n\n",a);
//     }
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int i,j,k;
//     for(int i=1;i<=30;i++)
//     {
//         for(int k =1;k<=30;k++)
//         {
//             for(int l =1;l<=30;l++)
//             {
//                 if(i*i+k*k==l*l)
//                 {
//                     printf("(%d, %d, %d)\n",i,l,k);
//                 }
//             }
//         }
//     }
//     return 0;
// }

/*Population of a town today is 100000. The population has increased
steadily at the rate of 10 % per year for last 10 years. Write a
program to determine the population at the end of each year in the
last decade.*/
// #include<stdio.h>
// int main()
// {
//     float pop=100000,i;
//     // float dif=9.090909;
//     // for(i=1;i<=10;i++)
//     // {
//     //     pop = pop - (dif*pop)/100 ;
//     //     printf("Population on %d year is %d\n",11-i,pop);
//     // }
//     for(i=1;i<=10;i++)
//     {
//         pop = pop - (pop*10)/110;
//         printf("Population on %.0f year is %.0f\n",11-i,pop);
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int ram,n=30000,count,i,l,k;
    for(i=1;i<=n;i++)
    {
        count=0;
        for(k=1;k*k*k<=i;k++)
        {
            for(l=k;k*k*k+l*l*l<=i;l++)
            {
                if(k*k*k+l*l*l==i)
                count++;
            }
        }
        if(count==2)
        {
            // printf("%d\n",i);
            for(int a=1;a<=i;a++)
            {
                for(int b=1;b<=i;b++)
                {
                    if(a*a*a+b*b*b==i)
                    {
                        printf("(%d , %d) = %d\n",a,b,i);
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}

