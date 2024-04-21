// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include <stdio.h>

main() {
  int num1, num2;

  printf("Enter Number 1: ");
  scanf("%d", & num1);

  printf("\nEnter Number 2: ");
  scanf("%d", & num2);

  printf("\nAddition of Number 1: %d and Number 2: %d is = %d", num1, num2, num1 + num2);

  printf("\nSubtraction of Number 1: %d and Number 2: %d is = %d", num1, num2, num1 - num2);

  printf("\nMultiplication of Number 1: %d and Number 2: %d is = %d", num1, num2, num1 * num2);

  printf("\nDivision of Number 1: %d and Number 2: %d is = %d", num1, num2, num1 / num2);

}
