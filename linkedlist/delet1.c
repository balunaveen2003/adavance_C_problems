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
		printf("mallo is error");
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

void delet1st()
{
	struct node *trav,temp;
	if(head==NULL)
	{
		printf("link is not created");
		return;
	}
	trav=head;
	head=head->next;
	free(trav);
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
	creatanode(10);
	creatanode(20);
	creatanode(30);
	creatanode(40);
	creatanode(50);
	creatanode(60);
	creatanode(70);
	display();
	printf("\n");

	delet1st();
	display();
	printf("\n");
}
