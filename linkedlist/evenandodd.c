#include<stdio.h>
#include<stdlib.h>
struct node{

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
		printf("malloc id error");
		return;
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

void evenandodd()
{
	struct node *temp=head;
	struct node *evenhead=NULL, *eventail=NULL;
	struct node *oddhead=NULL, *oddtail=NULL;
	struct node *nextnode;

	while(temp != NULL)
	{
	//	nextnode=temp->next;
	//	temp->next=NULL;
		if(temp->data%2==0)
		{
			if(evenhead==NULL)
			{
             			evenhead=eventail=temp;
			}
			else
			{
				eventail->next=temp;
				eventail=temp;
			
			}
		}
		else //ODD
		{
			if(oddhead==NULL)
			{
				oddhead=oddtail=temp;
			}
			else
			{
				oddtail->next=temp;
				oddtail=temp;
			}

		}

		temp=temp->next;
	}
	//combine both lists
	if(eventail != NULL )
	{
		eventail->next=oddhead;

	}
	if(oddtail != NULL)
	{
		oddtail->next=NULL;
	}
	//update head
	if(evenhead != NULL)
	{
		head=evenhead;
	}
	else
	{
		head=oddhead;
	}

}
void display()
{
	struct node *dis;
	if(head==NULL)
	{
		printf("link is not creted");
		return ;
	}
	dis=head;
	while(dis!= NULL)
	{
		printf("%d->",dis->data);
		dis=dis->next;
	}
	printf("NULL\n");	
}
int main()
{
	creatanode(1);
	creatanode(2);
	creatanode(3);
	creatanode(4);
	creatanode(5);
	creatanode(6);
	creatanode(7);
	display();
	printf("\n");
	
	evenandodd();
	display();
	printf("\n");
	
}
