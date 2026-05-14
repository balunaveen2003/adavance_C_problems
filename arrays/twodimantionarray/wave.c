#include<stdio.h>
int main()
{
	int arr[100][100];
	int (*p)[100]=arr;

	int r,c;
	printf("Enter the size of row and coloum");
	scanf("%d%d",&r,&c);
	printf("enter the elements");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	for(int j=0;j<c;j++)
	{
		if(j%2==0)
		{
			for(int i=0;i<r;i++)
			{
				printf("%d ",p[i][j]);
			}
//		printf("\n");
		}
		else
		{
			for(int i=r-1;i>=0;i--)
			{
				printf("%d ",p[i][j]);
			}
//		   printf("\n");
		}
	}


}
