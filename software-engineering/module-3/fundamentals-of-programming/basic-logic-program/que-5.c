// Find Area of Cube. Formula : a = 6a2

#include <stdio.h>

main() {

  float side, area;

  printf("Enter the Length of one side of Cube: ");
  scanf("%f", &side);

  area = 6 * side * side;

  printf("\nThe area of the cube is: %.2f", area);

}
