#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *x=&a;
	 int *y=&b;
	int temp=*x;
	*x=*y;
	*y=temp;
	printf("a=%d b=%d",a,b);

}
