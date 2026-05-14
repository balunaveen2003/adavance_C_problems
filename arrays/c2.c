#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6};
	int *p=&arr[5];
	while(p>=arr)
	{
		printf("%d",*p);
		p--;
	}
}
