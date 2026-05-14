#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4};
	int *p=arr;
	printf("%d",*p++ - *++p);
}
