

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
		printf("malloc is error");
		return ;
	}
	new->data=d;
	new->next=NULL;
	if(head1==NULL)
	{
		head1=new;
		return ;
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
		printf("malloc is error");
		return ;
	}
	new->data=d;
	new->next=NULL;
x	if(head2==NULL)
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
void display1()
{
	struct node *dis;
	if(head1==NULL)
	{
		printf("List is not present");
		return ;
	}
	dis=head1;
	while(dis != NULL)
	{
	   printf("%d->",dis->data);
	   dis=dis->next;
	}
}


void display2()
{
	struct node *dis;
	if(head2==NULL)
	{
		printf("List is not present");
		return ;
	}
	dis=head2;
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

void display()
{
	struct node *dis;
	dis=head1;
	while(dis !=NULL)
	{
		printf("%d->",dis->data);
		dis=dis->next;
	}

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
	creatanode1(10);
	creatanode1(50);
	creatanode1(30);
	creatanode1(60);
	creatanode1(20);
	creatanode1(40);
	creatanode1(90);
	display1();
	printf("\n");

	creatanode2(70);
	creatanode2(90);
	creatanode2(110);
	creatanode2(170);
	creatanode2(120);
	creatanode2(130);
	creatanode2(140);
	display2();
	printf("\n");

	printf("after two linked list merged\n");

	merge();
	
	display();


	printf("\n");

	printf("after sorting:\n");
	sorting();
	display();
	printf("\n");
}
