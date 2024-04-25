// Convert days into months

#include <stdio.h>


main(){
	float days, months;
	
	printf("Enter Days: ");
	scanf("%f", &days);
	
	months = days/30;
	printf("\nDay(s): %.2f",  days);
	printf("\nMonth(s): %.2f", months);
	
	
}
