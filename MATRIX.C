#include<stdio.h>
#include<conio.h>
int mat1[3][3],mat2[3][3],mat3[3][3],row,col,choice,cho;
void add()
{
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			mat3[row][col]=mat1[row][col]+mat2[row][col];
		}
	}
	printf("\nAddition Of Matrix Is\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" \t %d",mat3[row][col]);
		}
		printf("\n");
	}
}
void multi()
{
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			mat3[row][col]=mat1[row][col]*mat2[row][col];
		}
	}
	printf("\nMultiplication Of Matrix Is\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" \t %d",mat3[row][col]);
		}
		printf("\n");
	}
}
void transpose(int cho)
{
	if(cho==1)
	{
		for(row=0;row<3;row++)
		{
			for(col=0;col<3;col++)
			{
				mat3[row][col]=mat1[col][row];
			}

		}

		printf("\nTranspose Of Matrix 1 is\n");
		for(row=0;row<3;row++)
		{
			for(col=0;col<3;col++)
			{
				printf("\t%d ",mat3[row][col]);
			}
			printf("\n");
		}
	}
	else if(cho==2)
	{
		for(row=0;row<3;row++)
		{
			for(col=0;col<3;col++)
			{
				mat3[row][col]=mat2[col][row];
			}
		}
		printf("\nTranspose Of Matrix 2 is\n");
		for(row=0;row<3;row++)
		{
			for(col=0;col<3;col++)
			{
				printf(" \t%d ",mat3[row][col]);
			}

			printf("\n");
		}
	}
	else
	{
		printf("\nNO SUCH MATRIX PRESENT");
	}

}

void main()
{
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("Enter The Data For Matrix 1");
			scanf("%d",&mat1[row][col]);
		}
	}
	printf("\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("Enter The Data For Matrix 2");
			scanf("%d",&mat2[row][col]);
		}
	}
	printf("\nMatrix 1 Is\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("\t %d",mat1[row][col]);
		}
		printf("\n");
	}
	printf("\nMatrix 2 Is\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("\t %d",mat2[row][col]);
		}
		printf("\n");
	}
	while(1)
	{
	printf("\n1:Addition\n2:Multiplication\n3:Transpose\n4:exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			add();
			break;
		case 2:
			multi();
			break;
		case 3:
			printf("\nCHOOSE\n1:MATRIX1\n2:MATRIX2\n");
			scanf("%d",cho);
			transpose(cho);
			break;
		case 4:
			exit(1);
	}
	}

}