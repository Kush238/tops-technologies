// Find the area of a rectangular prism. Formula : A=2(wl+hl+hw)

#include <stdio.h>

main() {

	float w, h, l, area;
	
	
	printf("Enter Width : ");
	scanf("%f", &w);
	
	printf("\nEnter Heigth: ");
	scanf("%f", &h);
		
	printf("\nEnter Length: ");
	scanf("%f", &l);
	
	area = 2 * (w*h + h*l + h*w);
	
	printf("\nWidth: %.2f ", w);
	printf("\nHeight: %.2f ", h);
	printf("\nLength: %.2f ", l);

	printf("\n\nArea of a Rectangular Prism: %.2f ", area);		
}
