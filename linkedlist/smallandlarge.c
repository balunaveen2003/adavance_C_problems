#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;

void creatanode(int d);
void find();
void display();

void creatanode(int d)
{
	struct node *new,*trav;
	new=malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("malloc is error");
		return ;
	}
	new->data=d;
	new->next=NULL;
	if(head==NULL)
	{
		head=new;
		return ;
	}
	trav=head;
	while(trav->next != NULL)
	{
		trav=trav->next;
	}
	trav->next=new;
}

void find()
{
	struct node *trav=head;
	
	if(head==NULL)
	{
		printf("link is not created");
		return ;
	}
	int min=head->data;
	int max=head->data;
	
	while(trav != NULL)
	{
		if(trav->data<min)
		{
			min=trav->data;
		}
		else if(trav->data>max)
		{
			max=trav->data;
		}
		trav=trav->next;

	}
	printf("small=%d\n large=%d\n",min,max);

}

void display()
{
	struct node *dis;
	if(head==NULL)
	{
		printf("link is not created");
		return ;
	}
	dis=head;
	while(dis != NULL)
	{
		printf("%d->",dis->data);
		dis=dis->next;
	}
}

int main()
{
	creatanode(50);
	creatanode(20);
	creatanode(30);
	creatanode(10);
	creatanode(40);
	creatanode(70);
	creatanode(80);
	creatanode(60);
	display();
	printf("\n");

	find();

	printf("\n");
}
