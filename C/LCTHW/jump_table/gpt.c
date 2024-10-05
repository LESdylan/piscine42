#include <stdio.h>

// Define function prototypes for the operations
void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);
void invalidOperation(double a, double b);

// Define the jump table: an array of function pointers
void (*operation_table[256])(double, double);

int main() {
    // Initialize the jump table
    operation_table['+'] = add;
    operation_table['-'] = subtract;
    operation_table['*'] = multiply;
    operation_table['/'] = divide;
    
    // For any invalid operation, we can point to a fallback function
    for (int i = 0; i < 256; i++) {
        if (!operation_table[i]) {
            operation_table[i] = invalidOperation;
        }
    }

    // Simulate user input for a basic calculator
    char operation;
    double num1, num2;
    
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);  // Get the operation

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);  // Get the operands

    // Use the operation symbol as an index into the jump table
    operation_table[(unsigned char)operation](num1, num2);

    return 0;
}

// Function definitions for each operation
void add(double a, double b) {
    printf("Result: %.2f\n", a + b);
}

void subtract(double a, double b) {
    printf("Result: %.2f\n", a - b);
}

void multiply(double a, double b) {
    printf("Result: %.2f\n", a * b);
}

void divide(double a, double b) {
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero!\n");
    }
}

// Fallback function for invalid operations
void invalidOperation(double a, double b) {
    printf("Error: Invalid operation!\n");
}

