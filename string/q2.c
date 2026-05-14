#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="hello viven embedded world";
	char *ptr=str;
	printf("INPUT STRING :%s\n",str);
	while(*ptr != '\0')
	{
		char word[20];
		char *w=word;
		while(*ptr != ' ' && *ptr != '\0')
		{
			*w=*ptr;
			*w++;
			*ptr++;
		}
		*w='\0';
		if(strcmp(word,"viven") != '\0')
		{
			printf("%s  ",word);
		}
		if(*ptr != '\0')
		{
			ptr++;
		}
	}
	return 0;
}
