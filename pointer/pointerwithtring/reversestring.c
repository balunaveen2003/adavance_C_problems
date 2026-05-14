#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="hello";
	char *p=str;
	int n=strlen(str);
        for(int i=n-1;i>=0;i--)
	{
		printf("%c",*(p+i));

	}	
}
