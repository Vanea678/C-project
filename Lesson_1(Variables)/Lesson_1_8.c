#include <stdio.h>

int main() {
    double tempurature = 98.6;
    int whole_part = (int)tempurature;
    printf("Original temperature: %.1f\n", tempurature);
    printf("Whole part: %.1i\n", whole_part);
    return 0;
}
