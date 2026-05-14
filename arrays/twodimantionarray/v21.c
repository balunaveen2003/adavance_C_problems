#include<stdio.h>
int main()
{
	int arr[3][3],n,i,sum=0;
	printf("enter the array size ");
	scanf("%d",&n);

	printf("enter the array");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);

		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i-j==0)//left diagonal

			if(i+j==n-1)//rigtht diagonal	

			{
				sum=sum+arr[i][j];

			}
		}
	}
	
		printf("%d",sum);


}
