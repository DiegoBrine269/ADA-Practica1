#include "readFiles.h"

/*Esta función lee línea por línea la información que haya en un archivo .txt*/
void readFile(){
    char nombre [20];
    FILE *archivo;
    int numero;    

    printf("Ingrese el nombre del archivo (sin la extension): ");
    
    
    gets(nombre);
    archivo = fopen(strcat(nombre, ".txt"), "r");   


    while(!feof(archivo)){

        fscanf(archivo, "%d\n", &numero),  //Lee el número hasta encontrar un salto de línea
        printf("\nEntrada: %d\n", numero); //Imprime lo que leyó
        printf("Salida: \n" );             //Aquí iría el arreglo ordenado
        system("pause");                   //Pausa para que no se lean los 10,000 números y nuestras PCs crasheem

    }
}