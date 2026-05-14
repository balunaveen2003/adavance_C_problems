
#include<stdio.h>
int main()
{
	int arr[100],n;
	int *p=arr;
	int pos,i;
	printf("enter the array size");
	scanf("%d",&n);
	printf("enter the elemeents");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));

	}
	printf("enter the postion :");
	scanf("%d",&pos);
	pos=pos-1;
	for(i=pos;i<n-1;i++);
	{
    		*(p+i)=*(p+i+1);

	}
          n--;
	
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}

}
