


#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head1=NULL;
struct node *head2=NULL;

void creatanode1(int d)
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
	if(head1==NULL)
	{
		head1=new;
		return ;
	}
	trav=head1;
	
	while(trav->next != NULL)
	{
		trav=trav->next;
	}
	trav->next=new;
}

void creatanode2(int d)
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
	if(head2==NULL)
	{
