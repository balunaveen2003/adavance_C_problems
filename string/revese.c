#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="hello";
	char *p=str;
	
	 int end=strlen(str)-1;
	int start=0;
	while(start<end)
	{
		char temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
	printf("%s",str);
}
