#include<stdio.h>
void rev(int arr[],int start,int end)
{
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
int main()
{
	int arr[100];
	int n,k;
	printf("Enter the size");
	scanf("%d",&n);
	
	printf("enter the elemnts");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("enter the postion");
	scanf("%d",&k);

	
	rev(arr,0,k-1);//reverse first k elements
	rev(arr,k,n-1);//revrese remingin elements
	rev(arr,0,n-1);//reverse entrire array

	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
