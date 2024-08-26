#include <stdio.h>
#include "Conversion.h"

// Declaracion de funciones a utilizar

void printTablas (int lower, int upper, int step);
void printTablaCelsius (double lower, double upper, double step);
void printTablaFahrenheit (double lower, double upper, double step);
void printFilas (double lower, double upper, double step, double (*funcion) (double));
// (*f) es un puntero a una funcion -> Para mas detalles ver clase 21-05-24
void printFila (double valor, double valorConvertido);


// Funcion main

int main (void) {
/*     const int LOWERF = 0;
    const int UPPERF = 300;
    const int STEPF  = 20;

    const int LOWERC = 0;
    const int UPPERC = 100;
    const int STEPC  = 10; */

    printTablas (0, 100, 10);

    return 0;
}


// Funciones implementadas

void printTablas (int lower, int upper, int step){
    printTablaCelsius (lower, upper, step);
    printTablaFahrenheit (lower, upper, step);

}

void printTablaCelsius (double lower, double upper, double step) {
    printf("\nCelsius Fahrenheit\n");
    printf("--------------------\n");

    printFilas(lower, upper, step, Celsius);
}

void printTablaFahrenheit (double lower, double upper, double step) {
    printf("\nFahrenheit Celsius\n");
    printf("--------------------\n");

    printFilas(lower, upper, step, Fahrenheit);
}

// Se espeficica el tipo de f, luego el puntero (*f) y el tipo del parámetro que recibira
// Notese que debe corresponder con lo establecido en el contrato
void printFilas (double lower, double upper, double step, double (*funcion) (double)) {
    for(double valor = lower; valor <= upper; valor = valor + step)
        printFila (valor, funcion(valor));
}

void printFila (double valor, double valorConvertido) {
    printf("%3.1f     %6.1f\n", valor, valorConvertido);
}