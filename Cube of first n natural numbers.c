//CUBE OF FIRST 'N' NATURAL NUMBERS //
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int i, n, cube;
	printf("Enter the number of terms required: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cube=i*i*i;
		printf("Cube of  %d is %d \n",i ,cube);
	}
}
