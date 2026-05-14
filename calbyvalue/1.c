#include<stdio.h>
int  fun(int x)
{
	x=x+5;
	return x;
}
int main()
{
	int a=10,b;
	b=fun(a);
	printf("a=%d	b=%d",a,b);
}
