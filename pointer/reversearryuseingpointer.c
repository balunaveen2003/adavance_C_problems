#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6};
	int *ptr=&arr[5];
	
	for(int i=5;i>=0;i--)
	{
		printf("%d",*ptr--);
	}
}
