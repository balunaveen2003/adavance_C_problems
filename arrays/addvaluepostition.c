#include<stdio.h>
int main()
{
	int arr[100],n;
	int *p=arr;
	int pos,val;
	printf("enter the array size");
	scanf("%d",&n);
	printf("enter the elemeents");
	for(int i=0;i<n;i++)
	{
		scanf("%d",(p+i));

	}
	printf("enter the postion :");
	scanf("%d",&pos);
	pos=pos-1;
	printf("enter the value");
	scanf("%d",&val);
	int i;	
	for(i=pos;i>pos;i--);
	{
    		*(p+i)=*(p+i+1);

	}

	*(p+pos)=val;
	
	for(int i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}

}
