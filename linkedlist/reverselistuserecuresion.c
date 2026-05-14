#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};
struct node *head= NULL;
void creatanode(int d);
void reverse(struct node *head);
void display();

int main()
{
	creatanode(10);
	creatanode(20);
	creatanode(30);
	creatanode(40);
	creatanode(50);
	creatanode(60);
	display();
	printf("\n");

	 reverse(head);
	 printf("\n");
}

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

void reverse(struct node *trav)
{
	

	if(trav == NULL){
		
		return;
	
	}

	reverse(trav->next);

	printf("%d-> ", trav->data);
	
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
