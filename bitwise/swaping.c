#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("Enter the two numbers");
	scanf("%d%d",&x,&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("x=%d\ty=%d",x,y);

}
