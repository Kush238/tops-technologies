// Calculate person’s Annual salary

main(){
	int monthsWorked;
	float monthlySalary, annualSalary;
	
	printf("Enter Total Months You Worked: ");
	scanf("%d", &monthsWorked);
	
	printf("\nEnter Your Monthly Salary: ");
	scanf("%f", &monthlySalary);
	
	annualSalary = monthlySalary * monthsWorked;
	
	printf("\nMonths You Worked: %d", monthsWorked);
	printf("\nYour Monthly Salary: %.2f",  monthlySalary);
	printf("\nYour Annual Salary: %.2f",  annualSalary);
	
}
