/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int Mark1 , Mark2 ,Total;
  float Average;

  printf("Please enter the first subject mark  : ");
	scanf("%d", &Mark1);
  
  printf("Please enter the second subject mark : ");
	scanf("%d", &Mark2);

  Total = Mark1 + Mark2;
  Average = Total / 2.0;
  
  printf( "Average of the two marks is %.2f", Average );
  return 0;
}

