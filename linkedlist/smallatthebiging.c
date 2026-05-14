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
		return;
	}
	trav=head;
	while(trav->next != NULL)
	{
		trav=trav->next;
	}
	trav->next=new;
}

void  find()
{
	struct node *pre=NULL,*curent=head,*min=head,*premin=NULL;
	if(head==NULL)
	{
		printf("malloc is error");
		return ;
	}
	while(curent != NULL)
	{
		if(curent->data<min->data)
		{
			min=curent;
			premin=pre;
		}
		pre=curent;
		curent=curent->next;
	}
	if(premin==head)
	{
		return ;
	}
	premin->next=min->next;
	min->next=head;
	head=min;
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
	creatanode(5);
	creatanode(20);
	creatanode(30);
	creatanode(10);
	creatanode(40);
	creatanode(70);
	creatanode(80);
	creatanode(2);
	display();
	printf("\n");

	find();
	
	display();

	printf("\n");
}
