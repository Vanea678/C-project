#include <stdio.h>

int main() {
    int num1 = 25;
    int num2 = 7;


    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    int remainder = num1 % num2;

    int result1 = (num1 > num2) && (num1 % 2 == 1);
    int result2 = (num2 < 10) || num1 % 2 == 0;
    
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("Sum: %i\n", sum);
    printf("Difference: %i\n", difference);
    printf("Product: %i\n", product);
    printf("Quotient: %i\n", quotient);
    printf("Remainder: %i\n", remainder);
    printf("Result1: %i\n", result1);
    printf("Result2: %i\n", result2);
    return 0;
}