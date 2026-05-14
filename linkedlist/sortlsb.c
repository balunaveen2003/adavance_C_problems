#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;

void creatanode(int d);
void sort();
void display();

int main()
{
	creatanode(10);
	creatanode(30);
	creatanode(20);
	creatanode(40);
	creatanode(60);
	creatanode(50);
	creatanode(70);
	creatanode(80);
	display();
	printf("\n");

	printf("afre sorting\n");
	sort();
	display();
	printf("\n");
}

void creatanode(int d)
{
	struct node *new,*trav;
	new=malloc (sizeof(struct node));
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

void sort()
{
	struct node *i,*j;
	int temp;
	if(head==NULL)
	{
		printf("link is not created");
		return ;
	}
	for(i=head;i != NULL;i=i->next)
	{
		for(j=i->next;j != NULL;j=j->next)
		{
                        if(i->data < j->data)

			{
				temp=i->data;
				i->data=j->data;
				j->data=temp;
			}
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
