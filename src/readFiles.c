#include "readFiles.h"

//Variable para guardar el archivo
FILE *archivo;

/*Esta función lee la información que haya en un archivo .txt y la guarda en un arreglo de enteros*/
void readNameOfFile(char * nombre){
    printf("Ingrese el nombre del archivo (sin la extension): ");
    gets(nombre);
}

/*
    Lee un archivo txt
    Recibe:
        1. Nombre del archivo a abrir
        2. El arreglo en donde se almacenarán los números leídos
        3. El tamaño del arreglo
*/
void readFile(char * nombreArchivo, long int * numeros, int LIMITE){
    archivo = fopen(strcat(nombreArchivo, ".txt"), "r"); 
    long int numero;   
    int i = 0;

    for(int i=0; i < LIMITE; i++){
        fscanf(archivo, "%d\n", &numero);            //Lee el número hasta encontrar un salto de línea
        numeros[i] = numero;                         //Guarda el número en una posición del arreglo                                        
    }                                                                                                                                                                             
}

/*  Esta función imprime el arreglo
    Recibe:
        1. El arreglo que se quiere imprimir
        2. El tamaño de dicho arreglo
*/
void printArray(long int * numeros, int LIMITE){  
    for(int i=0; i < LIMITE; i++){
        printf("%d\n", numeros[i]);            
    }       
}