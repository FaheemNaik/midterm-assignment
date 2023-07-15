//PRINT EQUILATERAL TRIANGLE 1 22 333 ...//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int i, q, row, n;
	printf("Enter number of rows: \n");
	scanf("%d", &row);
	for(i=1;i<=row;i++)
	{
		for(q=row;q>i;q-=2)
		{
			printf(" ");
		}
	    for(q=1;q<=i;q++)
	    {
			printf("%d ",i);
		}
		for(q=row;q>i;q--)
		{
			printf(" ");
		}
		printf("\n");
	}
}
