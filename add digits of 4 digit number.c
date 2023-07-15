//ADDITION OF 4 DIGIT NUMBER//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int num, digit, sum=0;
	printf("Enter any 4 digit number: \n");
	scanf("%d", &num);
	digit = num % 10;
    sum += digit;
    num /= 10;
    digit = num % 10;
    sum += digit;
    num /= 10;
    digit = num % 10;
    sum += digit;
    num /= 10;
    digit = num % 10;
    sum += digit;
	printf("%d is sum.",sum);
	return 0;
}
