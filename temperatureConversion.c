#include <stdio.h>

int temperatureConversion() {

    double Celsius = 0;
    double convertedFahrenheit = 0;
    double Fahrenheit = 0;
    double convertedCelsius = 0;
    double Kelvin = 0;
    double convertedOther = 0;

    printf("Please enter the amount of Celsius you want converted to Fahrenheit: \n");
    scanf("%lf", &Celsius);

    convertedFahrenheit =  (Celsius * 9/5) + 32;
    
    printf("your %.2lf celsius' are %.2lf in fahrenheit\n", Celsius, convertedFahrenheit);
    /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    printf("Please enter the amount of fahrenheit you want converted to celsius: \n");
    scanf("%lf", &Fahrenheit);

    convertedCelsius = (Fahrenheit - 32.0) * (5.0/9.0);

    printf("your %.2lf fahrenheit are %.2lf in celsius\n", Fahrenheit, convertedCelsius);
    /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    
    return 0;
}