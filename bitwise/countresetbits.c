#include<stdio.h>
int main()
{
	int num,count=0,i=0;
	printf("Enter the number");
	scanf("%d",&num);
	while(i<16)
	{
		if((num & (1<<i))==0)
			count++;
		i++;
	}
	printf("%d",count);
}
