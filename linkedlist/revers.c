#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;

void creatanode(int d);
void reverse();
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

	printf("after reverse\n");
	reverse();
	display();
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
		return;
	}
	trav=head;
	while(trav->next != NULL)
	{
		trav=trav->next;
	}
	trav->next=new;

}

void reverse()
{
	struct node *currentnode,*prevnode,*nextnode;
	struct node *pre,*trav=head,*before;
	if(head==NULL)
	{
		printf("link is not created");
		return ;
	}

	while(trav->next!= NULL)
	{
		if(trav->next->data==20)
		{
			pre=trav;
			break;
		}
		trav=trav->next;

	}
	prevnode=NULL;
       	currentnode=nextnode=pre->next;
	while(nextnode != NULL)
	{
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	pre->next=prevnode;
	
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
