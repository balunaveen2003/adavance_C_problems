#include<stdio.h>
int main()
{
	int num,n;
	printf("Enter the number");
	scanf("%d",&num);
	printf("Enter the particalr position");
	scanf("%d",&n);
	num=num& ~(1<<(n-1));
	printf("%d",num);
	return 0;
}
