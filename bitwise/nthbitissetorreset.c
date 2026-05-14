#include<stdio.h>
int main()
{
	int num,n;
	printf("Enter the number");
	scanf("%d",&num);
	printf("Enter the position of bit");
	scanf("%d",&n);
	if(num & (1<<(n-1)))
	{
		printf("SET");
	}
	else
	{
		printf("CLEAR");
	}

		
}
