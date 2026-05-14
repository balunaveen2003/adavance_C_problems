#include<stdio.h>
int main()
{
	int arr[10],n,count=0;
	printf("enter the array size ");
	scanf("%d",&n);
	printf("Enter the elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{  
				 count=count+1;
				
				for(int k=j;k<n-1;k++)
				{
					arr[k]=arr[k+1];
				
				}
				n--;//reduce size
				j--;//recheck same postion

			}
		}
	}

	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("duplicate elements =%d\n",count);
	return 0;
}
