#include<stdio.h>
void swap(int* ,int* );
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

int main()
{
	int a,b,sum;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	int *x=&a;
	int *y=&b;
	printf("before swapping \na=%d b=%d",a,b);
	swap(x,y);
	printf("after swapping \na=%d b=%d",a,b);

}
