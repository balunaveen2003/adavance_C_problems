#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("enter the string");
	fgets(str,sizeof(str),stdin);
	while(str[i] != '\0')
	{
		
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]='z'))
		{
			printf("%c",str[i]);
		}
		i++;		
			
	}
}
