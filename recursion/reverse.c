#include<stdio.h>
int reverse(int ,int);
int main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	int result= reverse(num,0);
	printf("%d",result);
	return 0;

}	
int  reverse(int n,int sum)
	{
		
		if(n==0)
			return sum;
		
		
		return reverse(n/10, sum*10 + (n%10));

	}

