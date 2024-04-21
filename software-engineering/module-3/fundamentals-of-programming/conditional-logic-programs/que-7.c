// Accept marks from user and check pass or fail

#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter your marks: ");
    scanf("%d", &marks);
    
    if(marks >= 33) {
    	printf("\nPASSED!!!");
    	printf("\nYour marks are %d", marks);
	} 
	else {
		printf("\nFAILED!!!");
    	printf("\nYour marks are %d", marks);
	}
    
}
    
    
