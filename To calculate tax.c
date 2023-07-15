//TO CALCULATE TAX//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int income;
	printf("Enter total income: \n");
	scanf("%d",&income);
	if(income<150001)
	{
	     printf("No Tax.");	
	}
	else if(income<=300000)
	{
	     printf("10% Tax.");	
	}
	else if(income<=500000)
	{
	     printf("20% Tax.");	
	}
	else if(income>500001)
	{
	     printf("30% Tax.");	
	}
	else
	{
		printf("Invalid");
	}
}
