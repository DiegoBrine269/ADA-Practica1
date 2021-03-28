#include "readFiles.h"


void readFile(){
    char nombre [20];
    FILE *archivo;
    int numero;    

    printf("Ingrese el nombre del archivo (sin la extension): ");
    
    
    gets(nombre);
    archivo = fopen(strcat(nombre, ".txt"), "r");   


    while(!feof(archivo)){
        fscanf(archivo, "%d\n", &numero),
        printf("Entrada: %d\n", numero);
        printf("Salida %d\n", 123456);
        system("pause");
    }
}