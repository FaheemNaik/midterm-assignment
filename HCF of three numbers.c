//HCF OF THREE NUMBERS//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include<stdio.h>
int main() {
   int a, b, c, i, hcf;
   printf("Enter 3 positive numbers : \n");
   scanf("%d%d%d", &a, &b, &c);
   for(i = 1; i <= a || i <= b || i <= c; i++)
   {
   if( a%i == 0 && b%i == 0 && c%i == 0 )
      hcf = i;
   }

   printf("HCF = %d", hcf);
   
   return 0;
}
