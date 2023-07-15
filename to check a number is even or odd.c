//CHECK WHETHER THE NUMBER IS EVEN OR ODD//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any positive intiger: \n");
	scanf("%d", &n);
	if(n%2==0)
		printf("%d is even.", n);
	else
		printf("%d is odd.", n);
}
