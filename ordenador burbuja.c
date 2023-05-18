#include <stdio.h>
void intercambiar(int *a, int *b) {
  int temporal = *a;
  *a = *b;
  *b = temporal;
}

void burbuja(int arreglo[], int longitud) {
  for (int x = 0; x < longitud; x++) {
    for (int indiceActual = 0; indiceActual < longitud - 1;
         indiceActual++) {
      int indiceSiguienteElemento = indiceActual + 1;
      if (arreglo[indiceActual] > arreglo[indiceSiguienteElemento]) {
        intercambiar(&arreglo[indiceActual], &arreglo[indiceSiguienteElemento]);
      }
    }
  }
}

int main(void) {
  int arreglo[] = {30, 28, 11, 96, -5, 21, 18, 12, 22, 30, 97, -1, -40, -500};
  int longitud = sizeof arreglo / sizeof arreglo[0];
  printf("Imprimiendo arreglo antes de ordenar...\n");
  for (int x = 0; x < longitud; x++) {
    printf("%d ", arreglo[x]);
  }
  printf("\n");
  burbuja(arreglo, longitud);
  printf("Imprimiendo arreglo despues de ordenar...\n");
  for (int x = 0; x < longitud; x++)
    printf("%d ", arreglo[x]);
  return 0;
}