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
		printf("link is not created");
		return;
	}
	new->data=d;
	new->next=NULL;
	if(head1==NULL)
	{
		head1=new;
		return;
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
		printf("link is not created");
		return;
	}
	new->data=d;
	new->next=NULL;
	if(head2==NULL)
	{
		head2=new;
		return;
	}
	trav=head2;
	while(trav->next != NULL)
	{
		trav=trav->next;
	}
	trav->next=new;

}
void find()
{
	struct node *trav1=head1;
	struct node *i,*j;
	struct node *trav2=head2;
	for(i=trav1;i!=NULL;i=i->next)
	{
		for(j=trav2;j!=NULL;j=j->next)
		{
			if(i->next== j->next)
			{
				printf("%d",j->data);
			}
		}
	}
}

int main()
{
	creatanode1(10);
	creatanode1(20);
	creatanode1(30);
	creatanode1(50);
	creatanode1(40);

	creatanode1(10);
	creatanode2(50);
	creatanode2(80);
	creatanode2(30);
	find();

}
