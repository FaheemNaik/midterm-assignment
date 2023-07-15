//SUM OF 1 3 5 7 9...//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int i, n, num = 0, sum = 0;
	printf("Enter number of terms upto which sum required: \n");
	scanf("%d", &n);
	printf("\n");
	printf("\n");
	n = 2*n;
	for(i=1;i<=n;i+=2)
	{
		num = i;
		sum += num;
	}
	printf("\n");
	printf("\n");
	printf("Sum of first %d odd natural numbers is %d.",n , sum);
}
