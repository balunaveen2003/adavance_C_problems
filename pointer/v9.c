#include<stdio.h>
int main()
{
	int arr[100],n;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Useing array reverse\n");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	int *p=arr;
	printf("useing pointer\n");
	for(int i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
}
