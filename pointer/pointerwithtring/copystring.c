#include<stdio.h>
int main()
{
	char str[]="hello";
	char str1[100];
	char *c=str;
	char *p=str1;
	while(*c !='\0')
	{
		*p=*c;
		*c++;
		*p++;
	}
	*p='\0';
	printf("%s",str1);
}
