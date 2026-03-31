#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;

void creatanode(int d);
void addatfirst(int d);
void addpartical(int d);
void display();

int main()
{
	creatanode(10);
	creatanode(20);
	creatanode(30);
	creatanode(40);
	creatanode(50);
	creatanode(60);
	creatanode(0);
	display();
	printf("\n");

	addatfirst(5);
	display();
	printf("adding first node\n");

	addpartical(35);
	display();
	printf("adding particuler position\n");
	printf("\n");
}

void creatanode(int d)
{
	struct node *new,*trav;
	new=malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("Malloc is error");
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

void addatfirst(int d)
{
	struct node *add;
	add=malloc (sizeof(struct node));
	add->data=d;
	add->next=NULL;
	if(add==NULL)
	{
		printf("malloc is error");
		return ;
	}
	add->next=head;
	head=add;

}
void addpartical(int d)
{
	struct node *add,*trav,*pre;
	add=malloc(sizeof(struct node));
	if(add==NULL)
	{
		printf("Malloc is error");
		return ;
	}
	add->data=d;
	add->next=NULL;
	if(head==NULL)
	{
		printf("link is not created");
		return ;
	}
	trav=head;
	while((trav->data<40)&&(trav != NULL))
	{
		pre=trav;
		trav=trav->next;
	}
	add->next=pre->next;
	pre->next=add;
}
void display()
{
	struct node *dis;
	if(head==NULL)
	{
		printf("List is not present");
		return ;
	}
	dis=head;
	while(dis != NULL)
	{
	   printf("%d->",dis->data);
	   dis=dis->next;
	}
}
