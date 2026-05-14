#include<stdio.h>
int main()
{
	int n,position=0;;
	printf("Enter the number");
	scanf("%d",&n);
	if(n==0)
	{
		printf("No set bit \n");
		return 0;
	}
	while(n>0)
	{
		position++;
		n=n>>1;
	}
	printf("Last set bit position :%d\n",position);
	return 0;
}
