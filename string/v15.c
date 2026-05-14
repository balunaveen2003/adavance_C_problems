#include<stdio.h>
int main()
{
	char str[100];
	char *ptr = str;
	//char sub[100];
	printf("enter the steing:");
	fgets(str,sizeof(str),stdin);
	while(*ptr !='\0')
	{

		if(*ptr >= 'a' && *ptr <='z')
		{
			*ptr -= 32;

		}
		else if(*ptr >= 'A' && *ptr <='Z')
		{
			*ptr += 32;
		}
		ptr++;
	}
	ptr=str;
	printf("%s", ptr);
}
