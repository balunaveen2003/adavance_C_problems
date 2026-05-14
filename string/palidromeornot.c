#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[]="madam";
	char *p=str;
	int *s=0;
	int flage=1;
	int *e=strlen(str)-1;
	while(*s<*e)
	{
			if(str[s]!=str[e])
			{
				flage=0;
				break;
			}

		s++;
		e--;	
		
	}
	if(flage)
	{
		printf("palideom");
	}
	else
	{
		printf("not a palidrome");
	}

}
