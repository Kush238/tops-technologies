// Convert years into days and months

#include <stdio.h>


main(){
	float days, months, years;

	printf("Enter Year(s): ");
	scanf("%f", &years);
	
	days = years * 365;
	months = years * 12;
	
	
	printf("\nYears(s): %.2f", years);
	printf("\nDay(s): %.2f",  days);
	printf("\nMonth(s): %.2f", months);
	
	
}
