#include<stdio.h>
int main()
{
	int arr[]={9,8,7,6,5,4,1,3,2};
	int *p=arr;
	int max,i;
	max=*p;
	for(i=0;i<8;i++)
	{
		if(*(p+i)<max)
		{
			max=*(p+i);

		}
		
	}
	printf("%d",max);
}
