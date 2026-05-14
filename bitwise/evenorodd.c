#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
//	if(n&1)//1st odd
	if((n&1)==0)//even	
	{
		printf("%d is odd",n);
	}
	else
	{
		printf("%d is even",n);
	}
}
