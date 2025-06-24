#include <stdio.h>

int main() {
    int temperature_input; 
    char scale;            

    scanf("%d", &temperature_input);
    scanf(" %c", &scale); 
    float celsius_temperature;

    if (scale == 'F' || scale == 'f') { // Проверяем, если шкала Фаренгейт
        celsius_temperature = ((float)temperature_input - 32) * 5.0 / 9.0;
    } else { \
        celsius_temperature = (float)temperature_input;
    }

    if (celsius_temperature < 0) {
        printf("Freezing\n");
    } else if (celsius_temperature >= 0 && celsius_temperature <= 20) {
        printf("Cold\n");
    } else if (celsius_temperature >= 21 && celsius_temperature <= 30) { \
        printf("Pleasant\n");
    } else { 
        printf("Hot\n");
    }

    return 0;
}