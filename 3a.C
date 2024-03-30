#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define sizee 15
struct node
{
	int info;
	struct node *next;
};
struct node *newnode ,*top=NULL;
void push(int data)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=data;
	newnode->next=top;
	top=newnode;
	printf("Data Inserted Sucessfully");
}
void pop()
{
	if(top!=NULL)
	{
	struct node *ptr=top;
	top=top->next;
	printf("\nNode Deeeleted %d",ptr->info);
	free(ptr);
	}
	else
	{
		printf("Stack UnderFlow");
	}
}
void display()
{
	struct node *disp=top;
	while(disp!=NULL)
	{
		printf("\nData Is %d at loc %p",disp->info,disp->next);
		disp=disp->next;
	}
}
void main()

{
	int size,choice,i=0,data;
	clrscr();
	while(1)
	{
	printf("\n1:PUSH\n2:POP\n3:Display\n4:Exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			i=i+1;
			if(i>sizee)
			{
				printf("Stack OverFlow");
				exit(1);
			}
			printf("\nEnter The Data in stack");
			scanf("%d",&data);
			push(data);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(1);

	}
	}
}