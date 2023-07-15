//PRINT EQUILATERAL TRIANGLE USING ASTRICK//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int i, q, row, n;
	printf("Enter number of rows: \n");
	scanf("%d", &n);
	row=2*n;
	for(i=1;i<=row;i+=2)
	{
		for(q=row;q>i;q-=2)
		{
			printf(" ");
		}
	    for(q=1;q<=i;q++)
	    {
			printf("*");
		}
		for(q=row;q>i;q--)
		{
			printf(" ");
		}
		printf("\n");
	}
}
