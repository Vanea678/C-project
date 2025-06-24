#include <stdio.h>

int main() {
    int temperature;
    scanf("%d", &temperature);
    // Don't change above this line
    if (temperature > 30) {
        printf("It's a hot day!");
    } else if (temperature > 20 && temperature <= 30) {
        printf("It's a warm day!");
    } else if (temperature < 20 ) {
        printf("It's a cool day!");
    }    
    return 0;
}