#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],min,size,i,j,temp;
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
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	printf("Selection Sort is");
	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
	getch();

}