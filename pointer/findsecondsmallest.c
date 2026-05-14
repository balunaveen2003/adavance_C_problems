#include<stdio.h>
int main()
{
	int arr[]={9,8,7,6,4,3,2,1,4,5};
	int *p=arr;
	int n=8;
	int max,second;
	if(*p < *(p+1))
	{
		max=*p;
		second=*(p+1);
	}
	else
	{
		max=*(p+1);
		second=*p;
	}
	for(int i=2;i<n;i++)
	{
		if(*(p+i)<max)
		{
			second=max;
			max=*(p+i);
		}
		else if(*(p+i)<second && *(p+i)!=max)
		{
			*(p+i)=second;
		}

	}
	printf("%d",second);
}
