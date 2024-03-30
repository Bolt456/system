#include<stdio.h>
#include<conio.h>
int arr[100],min,i,j,size,temp1,temp,choice,search;
void searching(int search)
{
	for(i=0;i<size;i++)
	{
		if(arr[i]==search)
		{
			printf("\nElement Found At Location %d",i);
		}
	}
}
void sort()
{
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nSorted Array Is");
	for(i=0;i<size;i++)
	{
		printf( " %d ",arr[i]);
	}
}
void reverse()
{
	temp1=size-1;
	while(temp1>=0)
	{
		printf(" %d ",arr[temp1]);
		temp1=temp1-1;
	}
}
void main()
{
	clrscr();
	printf("Enter The size Of Array");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter The Data In Array");
		scanf("%d",&arr[i]);
	}
	while(1)
	{
	printf("\n1:Searching\n2:sorting\n3:Reversing\n4:Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter The Data You Wanna Search");
			scanf("%d",&search);
			searching(search);
			break;
		case 2:
			sort();
			break;
		case 3:
			reverse();
			break;
		case 4:
			exit(1);
	}
	}
}