#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter the string");
	fgets(str,sizeof(str),stdin);
	//remove newline
	str[strcspn(str,"\n")]='\0';
	char *p=str;
	for(int i=0;p[i] != '\0';i++)
	{
		for(int j=i+1; p[j] != '\0';j++)
		{
			if(p[i]==p[j])
			{
				for(int k=j;p[k]!='\0';k++)
				{
					p[k]=p[k+1];
				}
				j--;
			}
			
		
		}
	}
	printf("after remove duplicate %s",str);
}
