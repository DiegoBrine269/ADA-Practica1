#include "readFiles.h"
#define limite 100 

/*Esta función lee línea por línea la información que haya en un archivo .txt*/
void readFile(){
    char nombre [20];
    FILE *archivo;
    int numero;
    int numeros [limite];    
    int i=0;

    printf("Ingrese el nombre del archivo (sin la extension): ");
    
    gets(nombre);
    archivo = fopen(strcat(nombre, ".txt"), "r");   


    for(i=0; i<=limite; i++){
        fscanf(archivo, "%d", &numero),  //Lee el número hasta encontrar un salto de línea
        numeros[i] = numero;
    }

    printf("\nEntrada:\n"); //Imprime lo que leyó
    for(i=0; i<limite; i++){
        printf("%d", numeros[i]);
    }

    system("pause");


}