#include<stdio.h>
int main()
{
	char str[100];
	int alph=0,num=0,special=0;
	printf("enter the string=");
	fgets(str,sizeof(str),stdin);
	char *p=str;
	while(*p != '\0')
	{
		if( (*p>='A' && *p<='z')||(*p >='a'&& *p <='z'))
		{
			alph++;
		}
		else if(( *p>='0')&& ( *p<='9'))
		{
			num++;
		}
		else if (*p != '\n')
		{
			special++;
			
		}
		p++;
	}
	printf("alphbits=%d\n",alph);
	printf("digits=%d\n",num);
	printf("special characters=%d\n",special);
}
