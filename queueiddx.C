#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define sizee 14
struct node
{
	int info;
	struct node *next;
};
struct node *newnode,*front=NULL,*rear;
void insert(int data)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=data;
	newnode->next=NULL;
	if(front==NULL)
	{
		front=newnode;
		rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	printf("Node Inserted Sucessfully");
}

void deletee()
{
	if(front!=NULL)
	{
	struct node *ptr=front;
	front=front->next;
	printf("Node Deleted %d",ptr->info) ;
	free(ptr);
	}
	else
	{
		printf("QQueue is empty");
	}
}
void display()
{
	struct node *ptr1=front;
	while(ptr1!=NULL)
	{
		printf("\nData is %d At Location %p",ptr1->info,ptr1->next);
		ptr1=ptr1->next;
	}
}
void main()
{
	int  i=0,data,choice;
	clrscr();
	while(1)
	{
	printf("\n1:Insert\n2:Delete\n3:Display\n4:exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			i=i+1;
			if(i>sizee)
			{
				printf("Queue Is Full");
				exit(1);
			}
			printf("Enter The data At back of queue");
			scanf("%d",&data);
			insert(data);
			break;
		case 2:
			deletee();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(1);
	}
	}
}