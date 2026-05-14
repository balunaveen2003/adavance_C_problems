#include<stdio.h>
int main()
{
	int num,pos,n,add;
	printf("Enter the number");
	scanf("%d",&num);
	printf("Enter the postion bit");
	scanf("%d",&pos);
	printf("adding number number 1 or 0");
	scanf("%d",&n);
	add=num&(1<<(pos-1));
		add=n;
	num=num|add;
	printf("%d",num);
}
