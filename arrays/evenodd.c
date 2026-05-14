#include<stdio.h>
int main()
{
	int arr1[]={1,2,3,4,5,6};
	int *p1=arr1;
	int arr2[100];
	int *p2=arr2;
	int arr3[100];
	int *p3=arr3;
	int sum=0;
	int count=0;
	for(int i=0;i<6;i++)
	{
		if(*p1%2==0)
		{
			*p2=*p1;
			p2++;
			count++;//increse index value
			
		}
		else
		{
			*p3=*p1;
			p3++;
			sum++;//increse index value

		}
		p1++;
		
	}
	p2=arr2;
	p3=arr3;
	for(int i=0;i<sum;i++)
	{
		printf("even=%d\n",*p2);
		printf("		odd=%d\n",*p3);
		p2++;
		p3++;
	}
}
