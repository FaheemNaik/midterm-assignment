//DISPLAY FIRST 'N' NATURAL NUMBERS AND THEIR SUM//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int i, n, sum = 0;
	printf("Enter the number of terms required: \n");
	scanf("%d",&n);
	printf("First %d natural numbers are: \n", n);
	for(i=1;i<=n;i++)
	{
		printf("%d \n",i);
		sum+=i;
	}
	printf("Sum of first %d natural numbers is %d \n",n ,sum);
}
