#include<stdio.h>
int main()
{
	int arr1[100],arr2[100],n,m,arr3[200];
	printf("enter the 1st array size");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter the 2nd array size");
	scanf("%d",&m);
	for(int j=0;j<m;j++)
	{
		scanf("%d",&arr2[j]);
	}
	for(int i=0;i<n;i++)
	{
		arr3[i]=arr1[i];
		for(int i=0;i<m;i++)
		{
			arr3[n+i]=arr2[i];
	
			
		}
	}

	for(int i=0;i<n+m;i++)
	{
		printf("%d",arr3[i]);
	}
}
