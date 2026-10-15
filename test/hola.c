/*
 * Objetivo de prueba para REA + Ghidra.
 * Fichero propio, trivial, sin datos de terceros.
 * Sirve para verificar que el pipeline completo funciona.
 */
#include <stdio.h>
#include <string.h>

#define UMBRAL_MAX 100

/* Calcula la suma de dos enteros. */
int sumar(int a, int b) {
    return a + b;
}

/* Valida que el resultado no supere el umbral. */
int validar(int resultado) {
    if (resultado > UMBRAL_MAX) {
        return 0;
    }
    return 1;
}

/* Formatea el resultado en el buffer de salida. */
void formatear(int resultado, char *buf, size_t n) {
    snprintf(buf, n, "resultado=%d", resultado);
}

int main(void) {
    int r = sumar(2, 3);
    char salida[64];

    if (!validar(r)) {
        fprintf(stderr, "umbral excedido\n");
        return 1;
    }

    formatear(r, salida, sizeof(salida));
    printf("%s\n", salida);
    return 0;
}
