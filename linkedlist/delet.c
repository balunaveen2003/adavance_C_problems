#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head;

void creatanode(int d);
void deletlast();
void deletfirst();
void deletposition();
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

	printf("After deleting last node\n");
	deletlast();
	display();
	printf("\n");

	printf("after deleting first node");
        deletfirst();
	display();
	printf("\n");

	printf("after deleting particlar node");
	deletposition();
	display();

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

void deletlast()
{
	struct node *pre,*trav;
	if(head==NULL)
	{
		printf("Link is not present");
		return ;
	}
	trav=head;
	while(trav->next != NULL)
	{
		pre=trav;
		trav=trav->next;
	}
	pre->next=NULL;
	free(trav);
}

void deletfirst()
{
	struct node *trav,*pre;
	if(head==NULL)
	{
		printf("link is not created");
		return ;
	}
	trav=head;
	pre=trav->next;
	head=pre;
	free(trav);

}

void deletposition()
{
	struct node *trav,*pre;
	if(head == NULL)
	{
		printf("link is not creadted");
		return ;
	}
	trav=head;
	while(trav != NULL)
	{
	     if(trav->data==30)
	       {
		pre->next=trav->next;
		free(trav);
		return ;
	        }
	pre=trav;
	trav=trav->next;
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
