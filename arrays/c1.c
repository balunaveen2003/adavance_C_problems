#include<stdio.h>
int main()
{
	int arr[5]={2,3,4,5,6};
	int *s=arr;
	int *e=&arr[4];
	while(s<e)
	{
		int temp=*s;
		*s=*e;
		*e=temp;
		s++;
		e--;
	}
	int *p=arr;
	for(int i=0;i<=4;i++)
	{
		printf("%d",*p);
		p++;
	}

}
