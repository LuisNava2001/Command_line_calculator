/*
    A simple command-line calculator written in C that performs basic arithmetic operations and more:

    Addition
    Subtraction
    Multiplication
    Division
    Power (exponentiation)
    Factorial calculation

    Copyright (c) 2025 Luis Nava
    07/28/2025
*/

#include <stdio.h>
#include <math.h>

// Function Prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, int exponent);
unsigned long long factorial(int n);

int main(){
    int choice;
    double num1, num2;
    int int_num;

    while(1){
        // Display the menu
        printf("#############################################\n");
        printf("#######   Command Line Calculator     #######\n\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Factorial\n7. Exit.\n");
        printf("Choose an Operation: ");
        // Read user choice
        if(scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }
        printf("\n#############################################\n");
        
        switch(choice) {
            case 1:
                // Addition
                printf("Enter two numbers (Example= 21 49): ");
                if (scanf("%lf %lf", &num1, &num2) != 2) {
                    printf("Invalid input! Please enter two number.\n");
                    while (getchar() != '\n');
                    break;
                }
                printf("-----> Result: %.2lf\n", add(num1, num2));
                break;
            case 2:
                // Subtract
                printf("Enter two numbers (Example= 21 49): ");
                if (scanf("%lf %lf", &num1, &num2) != 2) {
                    printf("Invalid input! Please enter two number.\n");
                    while (getchar() != '\n');
                    break;
                }
                printf("-----> Result: %.2lf\n", subtract(num1, num2));
                break;
            case 3:
                // Multiply
                printf("Enter two numbers (Example= 21 49): ");
                if (scanf("%lf %lf", &num1, &num2) != 2) {
                    printf("Invalid input! Please enter two number.\n");
                    while (getchar() != '\n');
                    break;
                }
                printf("-----> Result: %.2lf\n", multiply(num1, num2));
                break;
            case 4:
                // Division with zero check
                printf("Enter two numbers (Example= 21 49): ");
                if (scanf("%lf %lf", &num1, &num2) != 2) {
                    printf("Invalid input! Please enter two number.\n");
                    while (getchar() != '\n');
                    break;
                }
                if(num2 != 0)
                    printf("-----> Result: %.2lf\n", divide(num1, num2));
                else
                    printf("Error!! Division by zero...\n");
                break;
            case 5:
                // Power calculation
                printf("Enter base and exponent: (Example= 21 49): ");
                if (scanf("%lf %d", &num1, &int_num) != 2) {
                    printf("Invalid input! Please enter a number and an integer.\n");
                    while (getchar() != '\n');
                    break;
                }
                printf("-----> Result: %.2lf\n", power(num1, int_num));
                break;
            case 6:
                // Factorial calculation
                printf("Enter a non-negative integer: ");
                if (scanf("%d", &int_num) != 1) {
                    printf("Invalid input! Please enter an integer.\n");
                    while (getchar() != '\n');
                    break;
                }
                if (int_num >= 0) {
                    printf("-----> Result: %llu\n", factorial(int_num));
                } else {
                    printf("Error!! Negative number for factorial...\n");
                } 
                break;
            case 7:
                // Exit the program
                printf("Good bye!!\nBy LuisNava2001.\n");
                return 0;
            default:
                // Invalid menu option
                printf("Error!! Invalid Option. Try again.\n");
        }
    }
    return 0;
}

// Adds two numbers and returns the result
double add(double a, double b) {
    return a + b;
}
// Subtracts b from a and returns the result
double subtract(double a, double b) {
    return a - b;
}
// Multiplies two numbers and returns the result
double multiply(double a, double b) {
    return a * b;
}
// Divides a by b and returns the result (caller must check division by zero)
double divide(double a, double b) {
    return a / b;
}
// Computes base raised to the power of exponent
double power(double base, int exponent) {
    return pow(base, exponent);
}
// Recursively calculates the factorial of n
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
