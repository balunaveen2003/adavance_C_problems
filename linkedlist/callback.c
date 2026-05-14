#include<stdio.h>
int  add(int *a,int *b)
{
	int sum;
	sum=*a+*b;
	return sum;
}
int (*fun)(int *, int *)=add;
int main()
{
	int a=10,b=20,sum;
	sum=fun(&a,&b);
	printf("%d%d%d",a,b,sum);
}

