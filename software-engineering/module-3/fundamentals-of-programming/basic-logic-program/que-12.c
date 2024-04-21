// Accept number of students from user. I need to give 5 apples to each student. How many apples are required?


#include <stdio.h>

main() {

	int total_students, apples;


	printf("Enter total number of students: ");
	scanf("%d", &total_students);

	apples = total_students * 5;
	
	printf("\nTotal number of apples required for %d students are : %d", total_students, apples);

	
}

