#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
//struct node *head2=NULL;
struct node *head=NULL;

void creatanode(int d);
void palindrome();
void display();

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
		return;
	}
	trav=head;
	while(trav->next != NULL)
	{
		trav=trav->next;
	}
	trav->next=new;
}
void palindrome()
{
	struct node *slow=head,*fast=head,*pre=NULL,*next,*cur;
	if(head==NULL)
	{
		printf("link is not created");
		return ;
	}
	while((fast->next != NULL)&&(fast->next->next !=NULL))
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	printf("midel=%d",slow->data);
	cur=slow;
	pre=NULL;
	next=slow;
	while(next != NULL)
	{
		next=next->next;
		cur->next=pre;
		pre=cur;
		cur=next;
		
	//printf("%d ",pre->data);
	}

	struct node *first=head;
	struct node *second=pre;
	while(second != NULL)
	{
		if(first->data != second->data)
		{
			printf("not a palindrome\n");
			return;
		}
		first=first->next;
		second=second->next;
	}
	printf("palindrome\n");

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
int main()
{
	creatanode(10);
	creatanode(20);
	creatanode(30);
	creatanode(20);
	creatanode(10);
	//creatanode(30);
	display();
	printf("\n");
	palindrome();

	printf("\n");
}

