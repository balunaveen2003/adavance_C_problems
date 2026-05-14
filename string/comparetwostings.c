#include<stdio.h>
int main()
{
	char str1[]="hello";
	char str2[]="hllo";
	char *p1=str1;
	char *p2=str2;
	while(*p1!='\0' && *p2!='\0')
	{
		if(*p1!=*p2)
		{
		//printf("the strings are NOT  same");	
			break;
		}
	
		p1++;
		p2++;
	}
	if(*p1 == '\0' && *p2=='\0')
	{
		printf("string is same");
	}
	else
	{
		printf("string is not same");
	}
}
