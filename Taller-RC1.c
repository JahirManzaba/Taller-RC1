#include <stdio.h>

void calcularEstadisticasEstudiante(float notasEstudiante[], int cantidadNotas, float *promedio, float *max, float *min) {
    float suma = 0;
    *max = 0;
    *min = 10;
    for(int j = 0; j < cantidadNotas; j++) {
        suma += notasEstudiante[j];
        if(notasEstudiante[j] > *max) *max = notasEstudiante[j];
        if(notasEstudiante[j] < *min) *min = notasEstudiante[j];
    }
    *promedio = suma / cantidadNotas;
}

int main() {
    int n;
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &n);

    float notas[n][3];

    for(int i = 0; i < n; i++) {
        printf("Estudiante %d:\n", i + 1);
        for(int j = 0; j < 3; j++) {
            do {
                printf("  Nota asignatura %d: ", j + 1);
                scanf("%f", &notas[i][j]);
                if(notas[i][j] < 0 || notas[i][j] > 10) 
                    printf("  Error: La nota debe estar entre 0 y 10.\n");
            } while(notas[i][j] < 0 || notas[i][j] > 10);
        }
    }

    printf("\n=== REPORTE POR ESTUDIANTE ===\n");
    float promEstudiante, maxNotaEst, minNotaEst;
    for(int i = 0; i < n; i++) {
        calcularEstadisticasEstudiante(notas[i], 3, &promEstudiante, &maxNotaEst, &minNotaEst);
        printf("Estudiante %d - Promedio: %.2f | Max: %.2f | Min: %.2f\n", 
                i + 1, promEstudiante, maxNotaEst, minNotaEst);
    }


    return 0;
}
