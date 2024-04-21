// Calculate person’s insurance premium based on salary


#include <stdio.h>

main() {

	float salary, premium;


	printf("Enter your salary: ");
	scanf("%f", &salary);

	if(salary >= 50000){
		premium = 0.08; 
		printf("\nYour Salary: %.2f", salary);
		printf("\nPremium: %.2f (%.2f)", premium*salary, premium);
	} else if (salary <= 30000){
		premium = 0.05; 
		printf("\nYour Salary: %.2f", salary);
		printf("\nPremium: %.2f (%.2f)", premium*salary, premium);
	} else {
		premium = 0.1;
		printf("\nYour Salary: %.2f", salary);
		printf("\nPremium: %.2f (%.2f)", premium*salary, premium);
	}

	
}

