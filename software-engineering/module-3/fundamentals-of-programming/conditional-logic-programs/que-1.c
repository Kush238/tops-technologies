// Write a C program to accept two integers and check whether they are equal or not

#include <stdio.h>

main() {

  int num1, num2;

  printf("Enter Number 1 : ");
  scanf("%d", &num1);

  printf("\nEnter Number 2 : ");
  scanf("%d", &num2);

  if (num1 == num2) {
    printf("\nEQUAL!!!");
    printf("\nNumber 1: %d and Number 2 %d are equal", num1, num2);
  } else if (num1 > num2) {
    printf("\nNOT EQUAL!!!");
    printf("\nNumber 1: %d is greater than Number 2 %d", num1, num2);
  } else {
    printf("\nNOT EQUAL!!!");
    printf("\nNumber 2: %d is greater than Number 1 %d", num2, num1);
  }
}
