#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;

void creatnode(int d);
void deletduplicat();
void display();

int main()
{
	creatnode(10);
	creatnode(20);
	creatnode(90);
	creatnode(10);
	creatnode(40);
	creatnode(50);
	creatnode(60);
	creatnode(60);
	creatnode(30);
	creatnode(70);
	display();
	printf("\n");

	printf("after deleting duplicat\n");
	deletduplicat();
	display();
	printf("\n");
}

void creatnode(int d)
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
	while(trav->next  != NULL)
	{
		trav=trav->next;
	}
	trav->next=new;
}

void deletduplicat()
{
	struct node *i,*j,*temp;
	if(head==NULL)
	{
		printf("link is not created\n");
		return;
	}
	for(i=head;i != NULL;i=i->next)
	{      
		temp=i;
		for(j=i->next;j != NULL;j=j->next)
		{
		if(i->data == j->data)
		{
		  
	            temp->next=j->next;	    
		    free(j);	
		    j=temp->next;
		
		
	        }
	         temp=temp->next;
		}
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
