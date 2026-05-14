#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *ptr=&a;
	int *ptr2=&b;
	printf("%d",*ptr);
	(*ptr)++;
	printf("%d",*ptr);
	printf("sum\n");

	int sum=*ptr+*ptr2;
	printf("%d\n",sum);

}
