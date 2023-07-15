//USING ARRAY TO READ NUMBERS FROM KEYBOARD AND CALCULATING THEIR SUM AND AVERAGE//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int i, data[10], sum = 0 ;
	float avg ;
	printf("Enter any 10 intigers: \n");
	for(i=0;i<10;i++)
	{
		scanf("%d", &data[i]);
		sum += data[i];
	}
	printf("Sum of the 10 intigers is %d . \n", sum);
	avg= sum / 10.0;
	printf("Average of the 10 intigers is %f . \n", avg);
}
