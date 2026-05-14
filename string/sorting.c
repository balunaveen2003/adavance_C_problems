#include<stdio.h>
int main()
{
	char str[100];
	printf("enter the string:");
	fgets(str,sizeof(str),stdin);
	for(int i=0; str[i] != '\0';i++)
	{
		for(int j=i; str[j] != '\0';j++)
		{
			if(str[i]>str[j])
			{
				char  temp=str[j];
				str[j]=str[i];
				str[i]=temp;
			}
		}
	}
	for(int i=0; str[i] != '\0';i++)
	{
		printf("%c",str[i]);
	}
}
