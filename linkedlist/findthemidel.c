#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL;

void creatanode(int d);
void count();
void midel();
void display();

int main()
{
	creatanode(1);
	creatanode(2);
	creatanode(3);
	creatanode(4);
	creatanode(5);
	creatanode(6);
	/*creatanode(7);
	creatanode(8);
	creatanode(9);
	creatanode(10);*/
	display();
	printf("\n");

	printf("after count elements\n");
	count();
	printf("\n");

	printf("find midel node\n");
	midel();
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

void count()
{
	struct node *temp;
	int count=0;
	if(head==NULL)
	{
		printf("link is not created");
		return ;
	}
	temp=head;
	while(temp != NULL)
	{
		count=count+1;
		temp=temp->next;
	}
	printf("COUNT=%d",count);
}
void midel()
{
	struct node *trav,*new;
	trav=head;
	new=head;
	while((new != NULL)&&(new->next != NULL))
	{
		trav=trav->next;
		new=new->next->next;
	}
	printf("MIDEL NODE =%d\n",trav->data);
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
		printf("%d",dis->data);
		dis=dis->next;
	}
}
