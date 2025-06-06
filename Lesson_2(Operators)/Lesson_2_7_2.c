#include <stdio.h>

int checkEligibility(float gpa, int creditHours, int hasViolations, int hasRecommendations) {
    int isEligible = !hasViolations && 
                    creditHours >= 60 && 
                    (gpa >= 3.5 || hasRecommendations);
                    
    return isEligible;
}

int main() {
    float gpa;
    int creditHours, hasViolations, hasRecommendations;
    
    scanf("%f", &gpa);
    scanf("%d", &creditHours);
    scanf("%d", &hasViolations);
    scanf("%d", &hasRecommendations);
    
    if (checkEligibility(gpa, creditHours, hasViolations, hasRecommendations)) {
        printf("The student is eligible for the scholarship.\n");
    } else {
        printf("The student is not eligible for the scholarship.\n");
    }
    
    return 0;
}