#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number");
	scanf("%d",&n);
	printf("Enter the change postion one=");
	scanf("%d",&i);
	printf("Enter the change postion two=");
	scanf("%d",&j);
	if(((n>>i-1)&1) != ((n>>j-1)&1))
	{
		//toggle both bit
		n=n^((1<<i-1)|(1<<j-1));
	}
	printf("%d",n);

}
