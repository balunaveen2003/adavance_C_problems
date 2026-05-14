#include<stdio.h>
int main()
{
	int arr[100][100];
	int r,c,sum=0;;
	printf("enter the size row");
	scanf("%d",&r);
	printf("enter the size of coloum");
	scanf("%d",&c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	for(int i=0;i<r;i++)
	{
		sum=0;
		for(int j=0;j<c;j++)
		{
			sum=sum+arr[i][j];
			
		}
		printf("row%d=%d",i+1,sum);
		printf("\n");
		
	}
	for(int i=0;i<c;i++)
	{
		sum=0;
		for(int j=0;j<r;j++)
		{
			sum=sum+arr[j][i];
			
		}
		printf("coloum%d=%d",i+1,sum);
		printf("\n");
	}
}
