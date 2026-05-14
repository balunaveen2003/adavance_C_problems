#include<stdio.h>
int main()
{
	int source,dest,i;
	printf("Enter the source  number");
	scanf("%d",&source);
	printf("Enter the destination number");
	scanf("%d",&dest);
	printf("Enter the position of bit");
	scanf("%d",&i);
         if(source&(1<<(i-1)))
	 {
		 dest=dest | (1<<(i-1));
	 }else
	 {
	         dest=dest & ~(1<<(i-1));
	 }
	printf("%d",dest);
	 

}
