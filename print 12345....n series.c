//PRINT THE SERIES 12345...//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter the number of terms required: \n");
	scanf("%d", &n);
	for(i=1;i<n;i++)
	{
		printf("%d, ",i);
	}
	printf("%d.", n);
}
