typedef int bool;
enum { false, true};

/*Función que implementa el algoritmo de ordenamiento de burbuja*/
void burbuja (int * arreglo){
    int i = 0;
    bool permutacion = true;
    bool actual;

    while(permutacion){
        permutacion = false;
        i++;

        for(actual=0; actual < 20-i; actual++){
            if(arreglo[actual] > arreglo[actual+1]){
                permutacion = true;

                //Intercambio
                int temp = arreglo[actual];
                arreglo[actual] = arreglo[actual+1];
                arreglo[actual+1] = temp;
            }
        }    
    }
}

/*Función que implementa el algoritmo de ordenamiento de burbuja bidireccional*/
void burbujaBidireccional (int * arreglo){
    bool permutacion;
    int actual = 0, direccion = 1;
    int comienzo = 1, fin = sizeof(arreglo); 

    do{
        permutacion = false;
        while(((direccion == 1) && (actual < fin)) || ((direccion == 1) && (actual > comienzo))){
            actual += direccion;

            if(arreglo[actual] < arreglo[actual-1]){
                int temp = arreglo[actual-1];
                arreglo[actual] = arreglo[actual-1];
                arreglo[actual-1] = temp;
                permutacion = true;
            }   
        }

        direccion == 1? fin-- : comienzo++;
        direccion = -direccion;
    }while(permutacion);
}