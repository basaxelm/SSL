#include <stdio.h>
#include "Conversion.h"
#include <math.h>
#include <assert.h>

int main (void) {
    const double tolerancia = 0.01;

    /* ----------- Celsius ----------- */

    // Se utiliza un modulo extra que controla si hay errores
    assert(controlDeError(Celsius(0), -17.77777, tolerancia)); 
    assert(controlDeError(Celsius(300), 148.888, tolerancia));
    assert(controlDeError(Celsius(150), 65.5555, tolerancia));

    // Se realiza la verificación dentro del parámetro de assert
    assert(fabs(Celsius(32.0) - 0.0) < tolerancia);       // Valor 0
    assert(fabs(Celsius(212.0) - 100.0) < tolerancia);    // Valor positivo
    assert(fabs(Celsius(-40.0) - (-40.0)) < tolerancia);  // Valor negativo


    /* ---------- Fahrenheit --------- */

    // Se utiliza un modulo extra que controla si hay errores
    assert(controlDeError(Fahrenheit(0), 32, tolerancia));  
    assert(controlDeError(Fahrenheit(100), 212, tolerancia));
    assert(controlDeError(Fahrenheit(50), 122, tolerancia));

    // Se realiza la verificación dentro del parámetro de assert
    assert(fabs(Fahrenheit(0.0) - 32.0) < tolerancia);      // Valor 0
    assert(fabs(Fahrenheit(100.0) - 212.0) < tolerancia);   // Valor positivo
    assert(fabs(Fahrenheit(-40.0) - (-40.0)) < tolerancia); // Valor negativo
    
    printf("Los test pasaron sin problemas\n");

    return 0;
}


int controlDeError (double valorConvertido, double valorEsperado, double margenDeError) {
    double val = fabs(valorConvertido - valorEsperado);

    return val < margenDeError;
}

