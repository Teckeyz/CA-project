#include <stdio.h>
#include <math.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if(b != 0) return a / b;
    else return 0; // Error: Division by zero
}

double power(double a, double b) {
    return pow(a, b);
}

double squareRoot(double a) {
    if(a >= 0) return sqrt(a);
    else return 0; // Error: Negative number
}

double logarithm(double a) {
    if(a > 0) return log(a);
    else return 0; // Error: Non-positive number
}

int main() {
    double num1, num2, result;
    int choice;

    printf("Advanced Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Logarithm\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 6 || choice == 7) {
        printf("Enter number: ");
        scanf("%lf", &num1);
    } else {
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);
    }

    switch(choice) {
        case 1:
            result = add(num1, num2);
            break;
        case 2:
            result = subtract(num1, num2);
            break;
        case 3:
            result = multiply(num1, num2);
            break;
        case 4:
            result = divide(num1, num2);
            break;
        case 5:
            result = power(num1, num2);
            break;
        case 6:
            result = squareRoot(num1);
            break;
        case 7:
            result = logarithm(num1);
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("Result: %lf\n", result);
    return 0;
}
