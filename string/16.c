#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	char *ptr=str;
	int count=0;
	char str2[5]="the";
	char *p=str2;
	while(*ptr != '\0')
	{
		if(*ptr==*p)
		{
			count=count+1;
		}
		*ptr++;
	}
	printf("%d",count);
}
