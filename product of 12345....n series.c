//PRODUCT OF 12345...n//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int i, n, prod = 1;
	printf("Enter the number of terms required: \n");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		prod*=i;
	}
		printf("Product of series is %d.",prod);
}
