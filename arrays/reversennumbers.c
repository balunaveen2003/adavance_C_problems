#include<stdio.h>
int main()
{
	int arr[100],n,i,p;
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the postion revrese array");
	scanf("%d",&p);
	printf("%d",p);
	p=p%n;
	for(int j=p;j<n/2;j++)
	{
		int temp=arr[j];
		arr[j]=arr[n-j-1];
		arr[n-j-1]=temp;

	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
