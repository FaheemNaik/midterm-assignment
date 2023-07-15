//SHOW COORDINATES ON CARTESIAN PLANE //
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	float x,y;
	printf("Enter the x and y coordinates respectively: \n");
	scanf("%f%f",&x,&y);
	if(x>0,y>0)
	{
		printf("(%.1f,%.1f) is in quadrant 1.",x,y);
	}
	else if(x>0,y<0)
	{
		printf("(%.1f,%.1f) is in quadrant 4.",x,y);
	}
	else if(x<0,y>0)
	{
		printf("(%.1f,.1%f) is in quadrant 2.",x,y);
	}
	else if(x<0,y<0)
	{
		printf("(%.1f,%.1f) is in quadrant 3.",x,y);
	}
	else
	{
		printf("Invalid");
	}
}
