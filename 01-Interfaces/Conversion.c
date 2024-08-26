// Este archivo contiene las funciones de conversion
// Deben coincidir los nombres y los tipos
// Para realizar la verificacion: 
// utilizamos Conversion. h como "contrato" (interfaz) entre TablasDeConversion.c y Conversion.c

#include "Conversion.h"

double Celsius (double f) {  // Fahrenheit a Celsius
    return (5.0 / 9.0) * (f-32);
}

double Fahrenheit (double c) {  // Celsius a Fahrenheit
    return (9.0 / 5.0) * c + 32; 
}