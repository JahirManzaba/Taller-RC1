#include <stdio.h>

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

    return 0;
}