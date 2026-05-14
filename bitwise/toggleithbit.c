#include<stdio.h>
int main()
{
	int num,pos,mask,sum;
	printf("Enter the number");
	scanf("%d",&num);
	printf("Enter the position of bit");
	scanf("%d",&pos);
	num=num^ (1<<pos);
	
	printf("%d",num);
}
