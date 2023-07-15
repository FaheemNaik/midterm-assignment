//PASS OR FAIL WITH MARKS//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include <stdio.h>
int main() {
	int p, c, m, eng, bio, total;
	float per;
	
	printf("Enter the marks for each subject as Physics, Chemistry, Math, bio, eng:\n");
	
	scanf("%d\n%d\n%d\n%d\n%d", &p, &c, &m, &eng, &bio);
	
	total = p + c + m + bio + bio;
	
    printf("Total marks obtained are: %d \n", total);
    
    per = (p + c + m + eng + bio)/5.0;
    
    if(per >= 33 )
    {
    	printf("Pass");
	}
	else
	{
		printf("Fail");
	}
}
