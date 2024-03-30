#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],size,i,j,temp;
	clrscr();
	printf("\nEnter The Size OF Array");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter The Data In Array");
		scanf("%d",&arr[i]);
	}
	printf("Array Before Sorting is");
	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}

	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	printf("Bubble Sort is");
	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}

	getch();
}