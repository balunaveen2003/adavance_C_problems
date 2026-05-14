

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head1=NULL;
struct node *head2=NULL;


void creatanode(struct node **head,int d)
{
    struct node *new,*trav;

    new = malloc(sizeof(struct node));

    if(new == NULL)
    {
        printf("malloc is error");
        return;
    }

    new->data = d;
    new->next = NULL;

    if(*head == NULL)
    {
        *head = new;
        return;
    }

    trav = *head;

    while(trav->next != NULL)
    {
        trav = trav->next;
    }

    trav->next = new;
}

void display(struct node *head)
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

void merge()
{
	struct node *temp=head1;
	if(head1==NULL)
	{
		printf("link is not created");
		return;
	}
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	temp->next=head2;


}

void sorting()
{
	struct node *i,*j;
	for(i=head1;i != NULL;i=i->next)
	{
		for(j=i->next;j != NULL;j=j->next)
		{
			if(i->data>j->data)
			{
				int temp=i->data;
				i->data=j->data;
				j->data=temp;

			}
		}
	}
}
int main()
{
	creatanode(&head1,10);
	creatanode(&head1,50);
	creatanode(&head1,30);
	creatanode(&head1,60);
	creatanode(&head1,20);
	creatanode(&head1,40);
	creatanode(&head1,90);
	display(head1);
	printf("\n");

	creatanode(&head2,70);
	creatanode(&head2,90);
	creatanode(&head2,110);
	creatanode(&head2,170);
	creatanode(&head2,120);
	creatanode(&head2,130);
	creatanode(&head2,140);
	display(head2);
	printf("\n");

	printf("after two linked list merged\n");

	merge();
	
	display(head1);


	printf("\n");

	printf("after sorting:\n");
	sorting();
	display(head1);
	printf("\n");
}
