#include<stdio.h>
int main()
{
	int arr1[]={1,2,3,4,5,6,7};
	int arr2[]={8,9,10,11,12,13,14};
	int *p1=arr1;
	int *p2=arr2;
	for(int i=0;i<7;i++)
	{
		int temp=*p1;
		*p1=*p2;
		*p2=temp;
		p1++;
		p2++;
	}
	p1=arr1;
	p2=arr2;
	for(int i=0;i<7;i++)
	{
		printf("arr1=%d",*p1);
		printf("arr2=%d\n",*p2);
		p1++;
		p2++;

	}
}
