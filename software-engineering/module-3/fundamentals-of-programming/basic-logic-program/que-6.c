// Find area of Triangle. Formula : A = 1/2 × b × h

#include <stdio.h>

main() {

  float base, height, area;

  printf("Enter the Base of Triangle: ");
  scanf("%f", &base);

  printf("\nEnter the Height of Triangle: ");
  scanf("%f", &height);

  area = 0.5 * base * height;

  printf("\nBase: %.2f ", base);
  printf("\nHeight: %.2f ", height);

  printf("\nArea of Triangle: %.2f ", area);

}
