#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int (*fun)(int,int)=add;
	int sum=fun(2,4);
	printf("sum=%d\n",sum);
}
