#include<stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num & (1>>0))
	{
		printf("set");
	}
	else
	{
		printf("reset");
	}
}
