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

int detect()
{
	struct node *slow=head,*fast=head;
	if(head==NULL)
	{
		printf("link is not present");
		return 0 ;
	}
	while( (fast != NULL)  && (fast->next != NULL) )
	{
	
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
		
			return 1;
		}
	}
	

	return 0;
}

void removeloop(struct node *head)
{
	 struct node *slow=head,*fast=head;
	 //detect loop
	 while(fast != NULL &&fast->next != NULL)
	 {
		 slow=slow->next;
		 fast=fast->next->next;
		 if(slow==fast)
		 {
			 break;
		 }
	 }
	 //no loop
	 if(slow !=fast)
	 {
		 return;
	 }
	 // find start of loop
	 slow=head;
	 struct node *pre=NULL;
	 while(slow!= fast)
	 {
		 pre=fast;
		 slow=slow->next;
		 fast=fast->next;
	 }
	 //remove loop
	 pre->next=NULL;
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
	display();
	printf("\n");
	struct node *temp=head;
	while(temp->next!= NULL)
	{
	temp=temp->next;
	}
	temp->next=head->next->next;


	printf("\n");
	if(detect())
	{
		printf("loop is created");
	}
	else
	{
		printf("loop is not created");
		}	
	printf("\n");
	removeloop(head);
	display();
	printf("\n");


}
