#include <stdio.h>

// Function to convert temperature
void convertTemperature(double temp, char fromUnit, char toUnit) {
    double result;

    if (fromUnit == 'C' && toUnit == 'F') {
        result = (temp * 9 / 5) + 32;
        printf("%.2lf°C is %.2lf°F\n", temp, result);
    } else if (fromUnit == 'C' && toUnit == 'K') {
        result = temp + 273.15;
        printf("%.2lf°C is %.2lfK\n", temp, result);
    } else if (fromUnit == 'F' && toUnit == 'C') {
        result = (temp - 32) * 5 / 9;
        printf("%.2lf°F is %.2lf°C\n", temp, result);
    } else if (fromUnit == 'F' && toUnit == 'K') {
        result = (temp - 32) * 5 / 9 + 273.15;
        printf("%.2lf°F is %.2lfK\n", temp, result);
    } else if (fromUnit == 'K' && toUnit == 'C') {
        result = temp - 273.15;
        printf("%.2lfK is %.2lf°C\n", temp, result);
    } else if (fromUnit == 'K' && toUnit == 'F') {
        result = (temp - 273.15) * 9 / 5 + 32;
        printf("%.2lfK is %.2lf°F\n", temp, result);
    } else {
        printf("Invalid conversion units.\n");
    }
}

int main() {
    double temperature;
    char fromUnit, toUnit;

    printf("Enter the temperature value: ");
    scanf("%lf", &temperature);

    printf("Enter the current unit (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &fromUnit);

    printf("Enter the unit to convert to (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &toUnit);

    convertTemperature(temperature, fromUnit, toUnit);

    return 0;
}
