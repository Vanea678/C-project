#include <stdio.h>

int main() {
    int smallNumber = 42;\
    float mediumNumber = 123.456;
    double largeNumber = smallNumber;
    
    printf("Small to large: %.1f\n", largeNumber);
    printf("Medium to large: %.1f\n", mediumNumber);
    return 0;
}