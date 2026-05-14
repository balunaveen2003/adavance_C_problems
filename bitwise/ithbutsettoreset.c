#include<stdio.h>
int main()
{
	int num,pos,sum,mask;
	printf("enter the number");
	scanf("%d",&num);
	printf("Enter the position of bit");
	scanf("%d",&pos);
	mask=num;
	sum=mask&(1<<(pos-1));
	printf("%d",sum);




	{
		printf("alredy set");
		return 0;
	}
	else
	{
		num=num&~(1<<(pos-1));
		printf("%d",num);
	}
}
