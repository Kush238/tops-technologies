// Convert kilometers into meters

#include <stdio.h>

main(){
	float km, m;


	printf("Enter Kilometer(s): ");
	scanf("%f", &km);
	
	m = km * 1000;
	
	printf("\nKilometer(s): %.2f", km);
	printf("\nMeters: %.2f",  m);
}
