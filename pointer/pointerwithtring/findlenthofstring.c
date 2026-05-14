#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="hello";
 	char *ptr=str;
	int count=0;
	while(*ptr!= '\0')
	{
		count=count+1;
		*ptr++;
	}
	printf("%d",count);
}
