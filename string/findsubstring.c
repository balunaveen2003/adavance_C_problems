#include<stdio.h>
int main()
{
	char str1[100];
	char str2[100];
	printf("enter the string1");
	fgets(str1,sizeof(str1),stdin);
	printf("enter the string 2");
	fgets(str2,sizeof(str2),stdin);
	char *p1=str1;
	char *p2;
	while(*p1 != '\0')
	{
		char *temp=p1;
		int i=0;
		p2=str2;
		if(*temp ==*p2 && *p2 !='\0')
		{

		printf("%d",i);
		   temp++;
		   p2++;
		}
		if(*p2=='\0')//substring
		{
			printf("substring found\n");
			return 0;
		}
		p1++,i++;
	}

}
