/*
    Práctica 1
    Descripción: Implementación de los algoritmos iterativos de búsqueda
    Fecha: 29/03/2021
    Versión: 1.0.3 
    Autores:
        - Alabat Montoya María Fernanda
        - González Oloarte Diego Enrique
*/

#include <stdio.h>
#include <time.h>
#include "readFiles.h"
#include "ordenamiento.h"

#define LIMITE 1000000

char nombre[20];
long int numeros[LIMITE];

int main (){

    //Leer el nombre del archivo
    readNameOfFile(nombre);

    //Guardo los números del archivo en un arreglo
    readFile(nombre, numeros, LIMITE);

    //Imprimir lo que se guardó en el arreglo
    //printArray(numeros, LIMITE);
    
    
    
    clock_t begin = clock();

    //Ordenar, cambiar burbuja por el algoritmo que se desee
    shell(numeros, LIMITE);

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f", time_spent);

    //Imprimir lo que se guardó en el arreglo
    printArray(numeros, LIMITE);

    return 0;
}