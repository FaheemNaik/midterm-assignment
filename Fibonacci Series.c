//FIBONACCI SERIES//
//ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:FAHEEM HAMID NAIK//
//ROLL NO.:ECE-22-1O//
#include <stdio.h>
int main() {
	
  int i, n;
  int n1 = 0, n2 = 1;
  int nextTerm = n1 + n2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", n1, n2);
  for (i = 3; i <= n; ++i) 
  {
    printf("%d, ", nextTerm);
    n1 = n2;
    n2 = nextTerm;
    nextTerm = n1 + n2;
  }

  return 0;
}
