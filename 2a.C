#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node * next;
};
struct node *pointer,*newnode,*begin=NULL;
void linklist(int data)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=data;
	newnode->next=NULL;
	if(begin==NULL)
	{
		begin=newnode;
		pointer=newnode;
	}
	else
	{
		pointer->next=newnode;
		pointer=newnode;
	}
}
void display()
{
	struct node *ptr=begin;
	while(ptr!=NULL)
	{
		printf("\nData Is %d At Address %p",ptr->info,ptr->next);
		ptr=ptr->next;
	}
}
void reverse()
{
	struct node *pointer1,*pointer2,*pointer3,*ptr1;
	pointer1=begin;
	pointer2=begin->next;
	pointer3=pointer2->next;
	if(pointer2==NULL)
	{
		printf("LinkList Cant Be Reversed");
	}
	else if(pointer3==NULL)
	{
		pointer1->next=NULL;
		pointer2->next=pointer1;
		begin=pointer2;
	}
	else
	{
		pointer1->next=NULL;
		while(pointer3!=NULL)
		{
			pointer2->next=pointer1;
			pointer1=pointer2;
			pointer2=pointer3;
			pointer3=pointer3->next;
		}
		pointer2->next=pointer1;
		begin=pointer2;
	}
	printf("\nReverse Of LinkList is");
	ptr1=begin;
	while(ptr1!=NULL)
	{
		printf("\nData Is %d At Address %p",ptr1->info,ptr1->next);
		ptr1=ptr1->next;
	}
}
void main()
{
	int choice,data;
	clrscr();
	while(1)
	{
	printf("\n1:Enter Elements In LinkList\n2:Display\n3:Reverse\n4:Exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter The Data In LinkList");
			scanf("%d",&data);
			linklist(data);
			break;
		case 2:
			display();
			break;
		case 3:
			reverse();
			break;
		case 4:
			exit(1);
	}
	}
	getch();
}
