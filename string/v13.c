#include<stdio.h>
int main()
{
	char str[100];
	char sub[100];
	int i=0;
	int e,s;
	printf("enter the string:");
	fgets(str,sizeof(str),stdin);
	printf("enter the string ponint of string");
	scanf("%d",&s);
	printf("enter  the string ending point");
	scanf("%d",&e);
	for(int i=s;i<e+s;i++)
	{
		sub[i-s]=str[i];
	}
	sub[e-s+1]='\0';
	printf("%s",sub);

}
