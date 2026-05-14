#include<stdio.h>
int main()
{
	char str[100];
	char *p=str;
	int count=0,sum=0;
	printf("ente the string");
	fgets(str,sizeof(str),stdin);
	while(*p != '\0')
	{
		if(('a'==*p)||('e'==*p)||('i'==*p)||('o'==*p)||('u'==*p)||('A'==*p)||('E'==*p)||('I'==*p)||('O'==*p)||('U'==*p))
		{
			count++;
		}
		else if(*p != '\0')
		{
			sum++;
		}
		p++;
	}
	printf("vowels=%d\n consont=%d\n",count,sum);
}
