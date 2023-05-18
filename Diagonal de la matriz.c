#include<stdio.h> 
#include <stdlib.h>

int main() {
    int n, i, j;
    
    printf("Ingrese el tamaño de la matriz cuadrada: ");
    scanf("%d", &n);

     int **matriz = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(n * sizeof(int));

    