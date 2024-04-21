// WAP to find the largest of three numbers.

#include <stdio.h>

int main() {
  int n1, n2, n3;

  printf("Enter Number 1: ");
  scanf("%d", &n1);

  printf("\nEnter Number 2: ");
  scanf("%d", &n2);

  printf("\nEnter Number 3: ");
  scanf("%d", &n3);

  if (n1 == n2 && n1 == n3 && n2 == n3) {
    printf("\nNumber 1: %d, Number 2: %d and Number: 3 %d all are same", n1, n2, n3);
  } else if (n1 > n2 && n1 > n3) {
    printf("\nNumber 2 : %d, Number 3 : %d", n2, n3);
    printf("\nNumber 1: %d is greatest", n1);
  } else if (n2 > n1 && n2 > n3) {
    printf("\nNumber 1 : %d, Number 3 : %d", n1, n3);
    printf("\nNumber 2: %d is greatest", n2);
  } else {
    printf("\nNumber 1 : %d, Number 2 : %d", n1, n2);
    printf("\nNumber 3: %d is greatest", n3);
  }

}
