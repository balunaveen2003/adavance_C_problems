#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int *p=arr;
	int *p1=(&arr)[5];
	printf("%ld\n",sizeof(arr));
	printf("%ld\n",sizeof(p+1));
	printf("%ld\n",sizeof(&arr));
	printf("%ld\n",sizeof(p1+1));
}
