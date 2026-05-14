#include<stdio.h>
int main()
{
	int arr[]={1,3,4,5,9,8,7,6,3,2};
	int *ptr=arr;
	int max,i;
	//asume arrry of 1st element is largest
	
	 max=*ptr;
	for(int i=1;i<9;i++)
	{
		if(*(ptr+i)>max)
		{
			
			max=*(ptr+i);

		}
	}
	printf("%d",max);
}
