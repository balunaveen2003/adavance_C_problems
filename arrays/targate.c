#include<stdio.h>
int main()
{
	
	int arr[4]={2,7,11,15};
	int target = 9;
	int n=4;
	scanf("%d",&target);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				printf("[%d + %d]=%d\n",i,j , target);
			}
		}
	}
}
