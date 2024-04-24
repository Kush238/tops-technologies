// Create menu driven calculator using function
// Make sure each business logic is denoted with appropriate comments and
// make your code interactive and represent clean and clear output on your
// console screen.
// Adhere to the coding principles

// First you need to display the menu as below : 
// 1. Addition
// 2. Substraction
// 3. Multiplication
// 4. Division

// Then you have to ask user for the choice and as per user�s choice you have to
// perform selected operation (add, minus, multiply, divide)

// Make sure that if your user will not select any of the options given in the MENU, then
// it should not perform any operation and have to display a user friendly message. 

// Use Looping concept for multiple time input 
// Make sure code will be clean and clear 
// Use function concept and make your code more understandable
// After completion of code put it in github in main branch 

#include <stdio.h>

main(){
	int choice;
	float n1, n2, add, sub, mul, div;
	
	do {
        
        printf("\nMenu:\n");
        printf("\n1. Add");
        printf("\n2. Subtract");
        printf("\n3. Multiply");
        printf("\n4. Divide");
        printf("\n5. Exit\n");
        
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\nEnter 1st Number: ");
                scanf("%f", &n1);
                printf("\nEnter 2nd Number: ");
                scanf("%f", &n2);
                printf("\nResult: %.2f\n", n1 + n2);
                break;
            case 2:
                printf("\nEnter 1st Number: ");
                scanf("%f", &n1);
                printf("\nEnter 2nd Number: ");
                scanf("%f", &n2);
                printf("\nResult: %.2f\n", n1 - n2);
                break;
            case 3:
                printf("\nEnter 1st Number: ");
                scanf("%f", &n1);
                printf("\nEnter 2nd Number: ");
                scanf("%f", &n2);
                printf("\nResult: %.2f\n", n1 * n2);
                break;
            case 4:
                printf("\nEnter 1st Number: ");
                scanf("%f", &n1);
                printf("\nEnter 2nd Number: ");
                scanf("%f", &n2);
                if(n2 == 0) {
                    printf("\nError! Cannot divide by zero.");
                } else {
                    printf("\nResult: %.2f\n", n1 / n2);
                }
                break;
            case 5:
                printf("\nExiting program. Thank you!\n");
                break;
            default:
                printf("\nInvalid choice! Please enter a number between 1 and 5.\n");
        }
    } while(choice != 5);
}
