#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6};
	int *p=arr;
	for(int i=0;i<5;i++)
	{
		printf("valu=%d->addtess= %p\n",*p,p);
:x
	}
}
