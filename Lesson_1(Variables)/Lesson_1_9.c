#include <stdio.h>

int main() {
    int age = 25;             
    float price = 19.99;      
    char grade = 'A';         
    #define MAX_SCORE 100

    float discounted_price = price * 0.85;
    int rounded_price = (int)discounted_price;

    printf("Age: %i\n", age); 
    printf("Price: $%.2f\n", price); 
    printf("Discounted Price: $%.2f\n", discounted_price); 
    printf("Rounded Price: $%i\n", rounded_price); 
    printf("Grade: %c\n", grade); 
    printf("Max Score: %i\n", MAX_SCORE); 

    return 0;
}