#include <stdio.h>

int main() {
    int number = 10;
    int prefixResult = ++number; 
    int postfixResult = number++; 
    
    printf("Number: %i\n", number);
    printf("Prefix result: %i\n", prefixResult);
    printf("Postfix result: %i\n", postfixResult);
    return 0;
}