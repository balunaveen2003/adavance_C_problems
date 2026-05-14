#include<stdio.h>
int main()
{
	int n,arr1[100],arr2[100],i;
	printf("enter the array size");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
		arr2[i]=arr1[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr2[i]);
	}
}
