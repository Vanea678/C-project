#include <stdio.h>

int main() {
    // Initialize variables
    int isSunny = 1;
    float windSpeed = 5.4;
    int temperature = 23;
    int solarPanelOutput = 9;
    int isCloudy = 0;
    
    // Create the logical expression
    int isGoodDay = isSunny && (temperature >= 23);
    
    // Don't change below
    if (isGoodDay) {
        printf("Good day for solar energy\n");
    } else {
        printf("Not ideal for solar energy\n");
    }
    
    return 0;
}