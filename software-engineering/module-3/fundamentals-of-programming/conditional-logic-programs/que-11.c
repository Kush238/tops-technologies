// WAP to find number is even or odd using ternary operator

#include <stdio.h>

int main() {
  int number;

  printf("Enter the number: ");
  scanf("%d", &number);

  if (number == 0) {
    printf("Number %d is Neutral", number);
  } else if (number % 2 == 0) {
    printf("Number %d is Even", number);
  } else {
    printf("Number %d is Odd", number);

  }
}
