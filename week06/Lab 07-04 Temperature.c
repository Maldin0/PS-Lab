//
// Created by Doomf on 8/23/2023.
//
#include "stdio.h"
#include "ctype.h"
#include "math.h"

void celsiusToFahrenheit(double *  celsius);
void fahrenheitToCelsius(double  * fahrenheit);
void printFahrenheit(double fahrenheit);
void printCelsius(double celsius);

int main() {
    double deg;
    char unit;
    scanf(" %lf %c", &deg, &unit);
    unit = tolower(unit);
    if (unit == 'c') {
        celsiusToFahrenheit(&deg);
        printFahrenheit(deg);
    } else {
        fahrenheitToCelsius(&deg);
        printCelsius(deg);
    }
    return 0;
}

void celsiusToFahrenheit(double  * celsius) {
    *celsius = 32 + *celsius * (180.0/100.0);
}

void fahrenheitToCelsius(double  * fahrenheit) {
    *fahrenheit = (*fahrenheit - 32)*(100.0/180.0);
}

void printFahrenheit(double fahrenheit){
    printf("%.2lf f", fahrenheit);
}
void printCelsius(double celsius){
    printf("%.2lf c", celsius);
}

