
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;

void creatanode(int d);
void swaping(int x,int y);
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

	printf("After swaping\n");
	swaping(20,40);
	display();
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

void swaping(int x, int y)
{
	struct node *currX=head,*preX=NULL;
	struct node *currY=head,*preY=NULL;
	if(x==y)
		return ;
	// find x
	while(currX && currX->data !=x)
	{
		preX=currX;
		currX=currX->next;
	}
	//find y
	while(currY && currY->data !=y)
	{
		preY=currY;
		currY=currY->next;
	}
	//if not found
	if(currX==NULL || currY==NULL)
	{
		printf("Elements not found");
		return ;
	}
	//if x is not found
	if(preX != NULL)

		preX->next=currY;
        else
		head=currY;
	//if y is not found
	if(preY != NULL)
		preY->next=currX;
	else
		head=currX;
	//swap next pointer
	struct node *temp=currX->next;
	currX->next=currY->next;
	currY->next=temp;

	
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
