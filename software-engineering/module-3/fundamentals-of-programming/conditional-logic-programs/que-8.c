// WAP to accept the height of a person in centimeters and categorize the person according to their height.

#include <stdio.h>

main(){
	float height;
	
	printf("Enter the height in CMs: ");
	scanf("%f", &height);
	
	if(height < 150){
		printf("\nHeight: %f", height);
		printf("\nThe person is Short");
	} 
	else if (height >= 150 && height < 170){
		printf("\nHeight: %f", height);
		printf("\nThe person is Average");		
	}
	else if (height >= 170 && height < 190){
		printf("\nHeight: %f", height);
		printf("\nThe person is Tall");		
	}
	else {
		printf("\nHeight: %f", height);
		printf("\nThe person is Very Tall");		
	}
}
