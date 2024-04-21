// WAP to check whether a number is negative, positive or zero.

#include <stdio.h>

int main() {
    int number;
    
    printf("Enter the number: ");
    scanf("%d", &number);
    
    if(number > 0){
    	printf("\nNumber %d is Positive", number);
	} 
	else if(number == 0){
		printf("\nNumber %d is 0", number);
	} 
	else {
		printf("\nNumber %d is Negative", number);
	}
    
}

