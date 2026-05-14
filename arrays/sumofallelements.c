#include<stdio.h>
int main()
{
	int arr[100],i,n,sum=0;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	sum+=arr[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d+",arr[i]);
	}
	printf("sum=%d\n",sum);
}
