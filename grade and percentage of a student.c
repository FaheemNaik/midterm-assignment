//GRADE AND PERCENTAGE OF A STUDENT//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main()
{
	int grade, phy, che, math, eng, cs;
	float percent,total;
	printf("Enter marks for Phy, Che, Math, Eng, Cs respectively: \n");
	scanf("%d%d%d%d%d",&phy,&che,&math,&eng,&cs);
	total=phy+che+math+eng+cs;
	percent=total/5;
	printf("Percentage obtained by student is %.1f. \n",percent);
	if(percent>=85)
	     printf("Grade A");	
	else if(percent>=70)
	     printf("Grade B");	
	else if(percent>=50)
	     printf("Grade C");	
	else if(percent>=34)
	     printf("Grade D");	
	else
		printf("Fail");
}
