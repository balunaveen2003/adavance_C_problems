#include<stdio.h>
int main()
{
	int arr[5]={1,2,8,9,7};
	int *p=arr;
	int max=*p;
	int second=*p;
	int threed=*p;
	for(int i=0;i<5;i++)
	{
		if(*(p+i)>max)
		{
			threed=second;
			second=max;
			max=*(p+i);
		}
		else if(*(p+i)>second && *(p+i)!=max)
		{
			threed=second;
			second=*(p+i);
		}

	}
	printf("first largest number=%d\n",max);
	printf("second largest number=%d\n",second);
	printf("threed largest number%d\n",threed);
	return 0;
}
