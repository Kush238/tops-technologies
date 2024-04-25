// Convert temperature Fahrenheit to Celsius

#include <stdio.h>

main(){
	float fah, cel;


	printf("Enter Fahrenheit Temperature: ");
	scanf("%f", &fah);
	
	cel = (fah - 32) * 0.55;
	
	printf("\nFahrenheit Temperature: %.2f", fah);
	printf("\nCelsius Temperature: %.2f", cel);
}
