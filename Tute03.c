/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n , sum = 0, i = 1;

  printf("Please enter the last digit of the sum from one  : ");
	scanf("%d", &n);

  while (i <= n)
  {
    sum = sum + i;
    i = i + 1;
  }

  printf("Sum of first %d number is : %d",n,sum);

  return 0;
}

