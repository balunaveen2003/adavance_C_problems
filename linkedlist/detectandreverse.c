
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;

void creatnode(int d);
void detect();
void display();

int main()
{
	creatnode(10);
	creatnode(20);
	creatnode(30);
	creatnode(40);
	creatnode(50);
	creatnode(60);
	creatnode(70);
	creatnode(80);
	creatnode(90);
	display();
	printf("\n");
	detect(303030);
	display();

}
void detect()
{
	struct node *trav;
	if(head==NULL)
	{
		printf("link is not created");
		return ;
	}
	trav=head;
	while((trav->data != NULL)&&(trav-> != NULL))
	{
		while(trav->data==30){
			struct node *currentnode=*nextnode=head;
		        struct node *prenode=NULL;
			while(trav != NULL)
			{
				nextnode=nextnode->next;
				currentnode->next=prenode;
				prenode=currentnode;
				currentnode=nextnode;
			}
		        head=prenode;
	}

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
