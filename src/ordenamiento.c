typedef int bool;
enum { false, true};

/*Función que implementa el algoritmo de ordenamiento de burbuja, (ya funciona)*/
void burbuja (long int * arreglo, int longitud){
    int i;
    int j;
    int aux_elem;
    int movimientos;

    movimientos = 0;

    for (int i = 0; i < longitud - 1; i++)
    {
        for (j = 1; j < longitud; j++)
        {
            if (arreglo[j] < arreglo[j-1])
            {   // si el elemento anterior es mayor, hacemos el cambio
                aux_elem = arreglo[j];
                arreglo[j] = arreglo[j-1];
                arreglo[j-1] = aux_elem;
                movimientos++;
            }
        }
    }
}



/*Función que implementa el algoritmo de ordenamiento de burbuja bidireccional (ya funciona)*/
void burbujaBidireccional (long int * arreglo, int longitud){
    bool permutation;
    int actual=0, direccion=1;
    int comienzo=1, fin=longitud;
    do {
        permutation=false;
        while (((direccion==1) && (actual<fin)) || ((direccion==-1) && (actual>comienzo))) {
            actual += direccion;
            if (arreglo[actual]<arreglo[actual-1]) {
                int temp = arreglo[actual];
                arreglo[actual]=arreglo[actual-1];
                arreglo[actual-1]=temp;
                permutation=true;
            }
        }
        if (direccion==1) fin--; else comienzo++;
        direccion = -direccion;
    } while (permutation);
}

/*Función que implementa el algoritmo de ordenamiento de Inserción, (ya funciona)*/
void insercion(long int * t, int longitud){
    int i, j;
    int actual;

    for(i=1; i<longitud; i++){
        actual = t[i];
        for(j = i; j > 0 && t[j-1] > actual; j--){
            t[j] = t[j-1];
            }
        t[j] = actual;
     }       
}
        

/*Función que implementa el algoritmo de ordenamiento de Selección, (ya funciona)*/
void seleccion(long int *vector, int taille){
  for (int i = 0; i < taille - 1; i++) {
    for (int j = i + 1; j < taille; j++) {
     
      if (vector[i] > vector[j]) {
        // ...intercambiarlos, es decir, mover el actual a la derecha y el de la derecha al actual
        int temporal = vector[i];
        vector[i] = vector[j];
        vector[j] = vector[j];
      }
    }
  }
}


/*Función que implementa el algoritmo de ordenamiento de Shell (ya funciona)*/
void shell(long int *t, int longitud){
    int i, j, intervalo, temp;
    intervalo = longitud/2;

    while (intervalo > 0) {
    for (i=intervalo; i < longitud; i++) {
        j = i;
        temp = t[i];
        while ((j >= intervalo) && (t[j - intervalo] > temp)) {
            t[j] = t[j - intervalo];
            j = j - intervalo;
        }
        t[j] = temp;
    }
    intervalo /= 2;
    }
}
