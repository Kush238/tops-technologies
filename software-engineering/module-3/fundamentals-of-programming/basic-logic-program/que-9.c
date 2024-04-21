// Find circumference of Triangle. Formula : triangle = a + b + c

#include <stdio.h>

main() {

	float a, b, c, ci;
	
	printf("Enter the length of Side A: ");
	scanf("%f", &a);
	
	printf("\nEnter the length of Side B: ");
	scanf("%f", &b);
		
	printf("\nEnter the length of Side C: ");
	scanf("%f", &c);
	
	ci = a + b + c;
	
	printf("\nSide A: %.2f ", a);
	printf("\nSide B: %.2f ", b);
	printf("\nSide C: %.2f ", c);

	printf("\n\nCircumference of Triangle: %.2f ", ci);

}
