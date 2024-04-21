// Find circumference of Rectangle. Formula : C = 4 * a

#include <stdio.h>

main() {

	float side, c;
 
	printf("Enter the length of one side of the Rectangle: ");
	scanf("%f", &side);
	
	c = 4 * side;
	
	printf("\nLength of one side of the Rectangle: %.2f ", side);

	printf("\nCircumference of Rectangle: %.2f ", c);
  
}
