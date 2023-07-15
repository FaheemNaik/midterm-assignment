//PROGRAM WHICH ACCEPTS MONTH AS NUMBER AND PRINTS ITS CORRESPONDING MONTH//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of a ");
	scanf("%d",&a);
	if(a==1)
		printf("January");
	else if(a==2)
		printf("February");
	else if(a==3)
		printf("March");
	else if(a==4)
		printf("April");
	else if(a==5)
		printf("May");
	else if(a==6)
		printf("June");
	else if(a==7)
		printf("July");
	else if(a==8)
		printf("August");
	else if(a==9)
		printf("September");
	else if(a==10)
		printf("October");
	else if(a==11)
		printf("November");
	else if(a==12)
		printf("December");
	else
		printf("Invalid");
}
