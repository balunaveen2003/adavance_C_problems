#include<stdio.h>
int main()
{
	int num,position,mask,sum;
	printf("enter the number");
	scanf("%d",&num);
	printf("Enter the position start with 1");
	scanf("%d",&position);
	mask=num;
	sum=mask&~(1<<(position-1));
	if(sum==0)
	{
		printf("bit postion alredy  1");
	}
	else
	{
		num=num|(1<<(position-1));
		printf("%d",num);
	}

	

}
