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


#include<stdio.h>
int fun(int x)
{
	x=x*x;
	return x;
}
#define PRODUCT(x) (x*x)
int main()
{
	int i=3,j,k,l;
	printf("%d\n",i);
	j=fun(i+1);
	k=fun(i++);
	l=fun(++i);
	printf("%d\n",i);
	printf("%d\n",j);
	printf("%d\n",k);
	printf("%d\n",l);
	printf("\n");

	int a=3,b,c,d;
	b=PRODUCT(a+1);
	c=PRODUCT(a++);
	d=PRODUCT(++a);
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);	
	return 0;
}