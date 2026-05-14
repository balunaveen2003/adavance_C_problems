#include<stdio.h>
int main()
{
	char str[100];
	int count=0;
	printf("Enter the string: ");
	fgets(str,sizeof(str),stdin);
	
	int i=0;
	while(str[i] != '\0')
	{
		printf("%c\n",str[i]);
		count=count+1;
		i++;
	}
	printf("%d",count);


}
