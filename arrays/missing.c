#include<stdio.h>
int main()
{
	int arr[100],n,i;
	int total=0,sum=0,missing;
	printf("Enter value of n :");
	scanf("%d",&n);
	printf("Enter the %d",n-1);
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	total=n*(n+1)/2;
	missing=total-sum;
	printf("%d",missing);
		
}

