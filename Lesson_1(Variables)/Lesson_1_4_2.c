#include <stdio.h>

int main() {
    int age = 65;
    int isEligible = (65 <= age);
    printf("Eligible for discount? %d\n", isEligible);
    
    return 0;
}