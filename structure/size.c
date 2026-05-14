#include<stdio.h>

	struct node{
		char a;
		int b;
		char c;
		double d;
		float e;
		char f;
	};
struct sum
{
	double d;
	int b;
	float e;
	char a;
	char f;
};
struct add
{
	short int a;
	float b;
	char c;
	double d;
	short int e;
	long int f;

};
struct add1
{
	double d;
	long int f;
	float b;
	short int a;
	short int e;
	char c;
};

	int main()
		{
			struct node a;
			struct sum b;
			struct add c;	
			struct add1 d;
		printf("give struct=%zu\n",sizeof(a));
		printf("after rearrange=%zu\n",sizeof(b));
		printf("give struct=%zu\n",sizeof(c));
		printf("after rearrange=%zu\n",sizeof(d));
		}
