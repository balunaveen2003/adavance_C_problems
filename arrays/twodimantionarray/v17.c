#include<stdio.h>
int main()
{
	int arr1[3][2];
	int arr2[3][3];
	int  arr3[2][3];
	printf("enter the 1st array");
	for(int i=0;i<3;i++)
	 	for(int j=0;j<4;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	
     /*	printf("enter the 2nd array");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}*/

	for(int i=0;i<4;i++)
		for(int j=0;j<3;j++)
		{
			
			arr3[j][i]=arr1[j][i];
		}

	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",arr3[j][i]);
		}
	printf("\n");
       }
}
