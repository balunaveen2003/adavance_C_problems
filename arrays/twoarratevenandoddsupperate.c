#include<stdio.h>
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={6,7,8,9,10};
	int *p;
	int even[100],odd[100];
	int *pe=even,*po=odd;
	int even_count=0,odd_count=0;


	p=arr1;
	for(int i=0;i<5;i++)
	{
		if(*p%2==0)
		{
			*pe=*p;
			pe++;
			even_count++;
		}
		else
		{
			*po=*p;
			po++;
			odd_count++;
		}
		p++;
	
	}

	p=arr2;
	for(int i=0;i<5;i++)
	{
		if(*p%2==0)
		{
			*pe=*p;
			pe++;
			even_count++;
		}
		else
		{
			*po=*p;
			po++;
			odd_count++;
		}
		p++;
		
	}

	pe=even;
	printf("even:");
	for(int i=0;i<even_count;i++)
	{
		printf("%d",*pe);
		pe++;
	}
	po=odd;
	printf("odd:");
	for(int i=0;i<odd_count;i++)
	{
		printf("%d",*po);
		po++;
	}

}
