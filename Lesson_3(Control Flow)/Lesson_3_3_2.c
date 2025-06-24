#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);
    char* season = "";
    // Don't change above this line
    switch (month) {
        case 12:
        case 1:
        case 2:
            season = "Winter";
            break;
        case 3:
        case 4:
        case 5:
            season = "Spring";
            break;
        case 6:
        case 7:
        case 8:
            season = "Summer";
            break;
        case 9:
        case 10:
        case 11:
            season = "Autumn";
            break;
        default:
            season = "Invalid month";
    }
    // Write your code below
    
    
    printf("%s\n", season);
    return 0;
}