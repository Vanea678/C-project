#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    
    // Write your code below
    char* result =  "numbei > 0";
    switch (number) {
        case 0:
            result = "zero";
            break;
        case -1:
            result = "negative";
            break;
        default:
            if (number > 0) {
                result = "positive";
            } else {
                result = "negative";
            }
    }
    
    printf("The number is %s\n", result);
    return 0;
}