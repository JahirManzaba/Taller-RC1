// Commit 1: Inicialización y carga de datos con punteros
#include <stdio.h>

int main() {
    int n;
    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &n);

    float notas[n][3];
    float *ptr; // Puntero auxiliar

    for (int i = 0; i < n; i++) {
        printf("Estudiante %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            ptr = *(notas + i) + j; // Apunta a la celda específica
            do {
                printf("  Asignatura %d (0-10): ", j + 1);
                scanf("%f", ptr);
                if (*ptr < 0 || *ptr > 10) printf("Nota invalida. ");
            } while (*ptr < 0 || *ptr > 10);
        }
    }
    return 0;
}