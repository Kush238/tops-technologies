// WAP to Find Area And Circumference of Circle

#include <stdio.h>

main() {

  float PI = 3.14159;
  float radius, area, circumference;

  printf("Enter the radius of circle: ");
  scanf("%f", &radius);

  printf("\nRadius: %.2f", (float) radius);

  area = PI * radius * radius;

  printf("\nArea of the circle: %.2f", area);

  circumference = 2 * PI * radius;

  printf("\nCircumference of the circle: %.2f", circumference);

}
