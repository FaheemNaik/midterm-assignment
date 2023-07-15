//PRINT EQUILATERAL TRAINGLE USING 1 212 32123 ...//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int i, q, row;
	printf("Enter valid data: \n");
	scanf("%d", &row);
	for(i=1;i<=row;i++)
	{
		for(q=row;q>i;q--)
		{
			printf(" ");
		}
	    for(q=i;q>=1;q--)
	    {
			printf("%d",q);
		}
		for(q=2;q<=i;q++)
	    {
			printf("%d",q);
		}
		for(q=row;q>i;q--)
		{
			printf(" ");
		}
		printf("\n");
	}
}
