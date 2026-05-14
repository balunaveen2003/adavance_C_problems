#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("enter the string ");
	fgets(str,sizeof(str),stdin);
        char str1[]="viven";
	while(str[i] != '\0')
	{
		if(str[i]==str1[i])
		{
		
		}
		else
		{
			printf("%s",str);
		}
		i++;
		
	}
       
}
