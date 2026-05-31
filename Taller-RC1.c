#include <stdio.h>

int main() {
    int n;
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &n);

    float notas[n][3];

    for(int i = 0; i < n; i++) {
        printf("Estudiante %d:\n", i + 1);
        for(int j = 0; j < 3; j++) {
            printf("  Nota asignatura %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    return 0;
}