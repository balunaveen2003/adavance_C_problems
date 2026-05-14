#include<stdio.h>
int main()
{
	int num,position=1;
	printf("Enter the number");
	scanf("%d",&num);
	if(num==0)
	{
		printf("no set bit\n");
		return 0;
	}
	
		while((num & 1)==0)
		{
			position++;
			num=num>>1;
		}
	printf("First set bit postion : %d \n",position);
}
