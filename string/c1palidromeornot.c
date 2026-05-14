#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *start,*end;
	printf("enter the string");
	fgets(str,sizeof(str),stdin);
	//remove newline
	str[strcspn(str,"\n")]='\0';

	start=str;//pointer first character
	end=str+strlen(str)-1;//pointer moves last character
	
	int ispalindrome=1;
	while(start<end)
	{
		if(*start!=*end)
		{
			ispalindrome=0;
			break;

		}
		start++;
		end--;

	}	
	if(ispalindrome)
	{
		printf("palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}
}

