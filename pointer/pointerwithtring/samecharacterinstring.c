#include<stdio.h>
int main()
{
	char *str[]={"flower","flow","floght"};
	int n=3;
	int i,j;
	//loop through character of first string 
	for(i=0;str[0][i]!='\0';i++)
	{
		//compare with all other strings
		for(j=1;j<n;j++)
		{
			//if mismatch OR string ends
			if(str[j][i] != str[0][i])
			{
				goto end;
			}
		}
	
	//if all match print character
	printf("%c\n",str[0][i]);
	}
end:
	return 0;
}
