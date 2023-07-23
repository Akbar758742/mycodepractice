#include <stdio.h>

// Function to convert temperature from Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert temperature from Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert temperature from Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert temperature from Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

int main() {
    int choice;
    double temperature;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &temperature);
            printf("%.2f Celsius is %.2f Fahrenheit.\n", temperature, celsiusToFahrenheit(temperature));
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf", &temperature);
            printf("%.2f Fahrenheit is %.2f Celsius.\n", temperature, fahrenheitToCelsius(temperature));
            break;
        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &temperature);
            printf("%.2f Celsius is %.2f Kelvin.\n", temperature, celsiusToKelvin(temperature));
            break;
        case 4:
            printf("Enter temperature in Kelvin: ");
            scanf("%lf", &temperature);
            printf("%.2f Kelvin is %.2f Celsius.\n", temperature, kelvinToCelsius(temperature));
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
