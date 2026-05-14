#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char sub[100];
	printf("enter the string");
	fgets(str,sizeof(str),stdin);
	printf("enter the sub string");
	fgets(sub,sizeof(sub),stdin);
	str[strcspn(str,"\n")]='\0';
	sub[strcspn(sub,"\n")]='\0';
	if(sub[0]=='\0')
	{
		printf("sub string is not creted");
		return 0;
	}
	char *p1=str;
	int index=0;
	while(*p1 != '\0')
	{
		char *t1=p1;
		char *t2=sub;
		while(*t1&&*t2&& *t1==*t2)
		{
			t1++;
			t2++;
		}
		if(*t2=='\0')
		{
			printf("sub indext value%d",index);
		}
	p1++;
	index++;
	}
}
