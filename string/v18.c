#include<stdio.h>
int main()
{
	char str[100];
	int fre[256]={0};
	int i;
	printf("enter the string");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i] != '\0';i++)
	{
		fre[str[i]]++;
	}
	
	printf("frequency");
	for(int i=0;i<256;i++)
	{
	if(fre[i] != '\0')
	{
		printf("%c occurs %d times\n",i,fre[i]);
	}
	}
}
