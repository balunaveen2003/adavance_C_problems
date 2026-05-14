#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;

void creatanode(int d)
{
	struct node *new,*trav;
	new=malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("malloc i error");
		return;
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
void addatparticalr(int d)
{
	struct node *new,*trav,*pre;
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
		printf("link is notcreated");
		return;
	}
	trav=head;
	while((trav != NULL) && (trav->data<30))
	{
		pre=trav;
		trav=trav->next;

	}
	new->next=pre->next;
	pre->next=new;
}
void display()
{
	struct node *dis;
	if(head==NULL)
	{
		printf("link is not created");
		return;
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
	int d,c;
	creatanode(10);
	creatanode(20);
	creatanode(30);
	creatanode(40);
	creatanode(50);
	creatanode(60);
	creatanode(70);
	creatanode(80);
	creatanode(90);
	display();
	printf("\n");
	addatparticalr(15);
	display();
	printf("\n");
	
}
