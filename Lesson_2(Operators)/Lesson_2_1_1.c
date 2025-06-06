#include <stdio.h>

int main() {
    int number = 17;
    int remainder = number % 5;
    int number2 = number % 2 == 0 ;


    printf("Number: %i\n", number);
    printf("Remainder when divided by 5: %i\n", remainder);
    printf("17 is even? %i\n", number2);

    return 0;
}