// Find area of Rectangle. Formula : A=wl

#include <stdio.h>

main() {

  float width, length, area;
  
  printf("Enter the Width of Rectangle: ");
  scanf("%f", &width);

  printf("\nEnter the Length of Rectangle: ");
  scanf("%f", &length);  
  
  area = width * length;
  
  printf("\nWidth: %.2f ", width);
  printf("\nLength: %.2f ", length);

  printf("\nArea of Rectangle: %.2f ", area);
}
