#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL;

void creatnode(int);
void swap();
void display();

void creatnode(int d)
{
	struct node *new,*trav;
	new=(struct node *)malloc(sizeof(struct node));
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
	while(trav->next  != NULL)
	{
		trav=trav->next;
	}
	trav->next=new;
}
void swap()
{
	struct node *temp=head,*trav=head;
	struct node *premin= NULL, min= NULL,prev= NULL;
	if(head==NULL)
	{
		printf("link is not created");
		return ;
	}
	while(trav != NULL)
	{
		trav=trav->next;
		if(temp->data > trav->data)
		{
			temp=trav->data;
			prev=trav;
			
		}
	}
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
	creatnode(90);
	creatnode(20);
	creatnode(30);
	creatnode(40);
	creatnode(10);
	creatnode(60);
	creatnode(70);
	creatnode(80);
	display();
	printf("\n");

	printf("find small element\n");
	swap();
	display();
	printf("\n");
}
