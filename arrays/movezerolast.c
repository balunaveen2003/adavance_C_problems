#include<stdio.h>
int main()
{
	int arr1[100],arr2[100],n,i,j=0,k,temp;
	printf("Enter the array size");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}

	for(k=0;k<n;k++)
	{
          if(arr1[k]!=0)
           {
	     arr2[j]=arr1[k];
	     j++;
          }
	}

	while(j<n)
	{
		arr2[j]=0;
		j++;
	}

	for(k=0;k<j;k++)
	{
		printf("%d",arr2[k]);
	}
}
