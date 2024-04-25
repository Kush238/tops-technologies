// Convert minutes into seconds and hours

#include <stdio.h>


main(){
	float min, sec, hr;


	printf("Enter Minutes: ");
	scanf("%f", &min);
	
	sec = min * 60;
	hr = min / 60;
	
	printf("\nMinutes: %.2f", min);
	printf("\nSeconds: %.2f",  sec);
	printf("\nHours: %.2f", hr);		
}
