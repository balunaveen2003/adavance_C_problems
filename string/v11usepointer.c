#include<stdio.h>
int main()
{
	char str[100];
	printf("enter the string");
	fgets(str,sizeof(str),stdin);
	char *a=str;
	char *b=str;
	while(*a != '\0')
	{
		
		b=a+1;
		while(*b != '\0')
		{
			if(*a>*b)
			{
				char temp=*b;
				*b=*a;
				*a=temp;
			}
			b++;
		}
		a++;
	}
	printf("%s",str);

	
}
