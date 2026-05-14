#include<stdio.h>
int main()
{
	char str[100],cop[100];
	printf("Enter the string");
	fgets(str,sizeof(str),stdin);
	for(int i=0;str[i] !='\0';i++)
	{
		cop[i]=str[i];
	}
	printf("%s",cop);

}
