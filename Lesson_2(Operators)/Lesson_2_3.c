#include <stdio.h>

int main() {
    int number = 10;

    printf("After: += 5 %i\n ", number += 5);
    printf("After: -= 3 %i\n ", number -= 3);
    printf("After: *= 2 %i\n ", number *= 2);
    printf("After: /= 3 %i\n ", number /= 3);
    printf("After: %= 4 %i\n ", number %= 4);

    return 0;
}