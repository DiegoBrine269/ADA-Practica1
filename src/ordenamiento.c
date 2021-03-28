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

/*Función que implementa el algoritmo de ordenamiento de Inserción*/
void insercion(int * t){
    int i, j;
    int actual;

    for(i=1; i<20; i++){
        actual = t[i];
        for(j = i; j > 0 && t[j-1] > actual; j--){
            t[j] = t[j-1];
            }
        t[j] = actual;
     }       
}
        

/*Función que implementa el algoritmo de ordenamiento de Selección*/
void seleccion(int *vector, int taille){
    int actual, mas_pequeno, j, temp;

    for(actual = 0; actual < taille-1; actual++){
        mas_pequeno = actual;
        for(j = actual 1; j < taille; j++){
               if(vector[j] < vector[mas_pequeno])
                 mas_pequeno = j;
         temp = vector[actual];
         vector[actual] = vector[mas_pequeno];
         vector[mas_pequeno] = temp;
        }
    }    
}


/*Función que implementa el algoritmo de ordenamiento de Shell*/
void tri_insercion(int *t, int gap, int debut){
    int j, en_cours;

    for(int i = gap + debut; i < 20; i+=gap){
        en_cours = t[i];
        for(j = i; j >= gap && t[j - gap] > en_cours; j-=gap){
            t[j] = t[j - gap];
        }
        t[j] = en_cours;
    }
}

void shell(int *t){
    int intervalles[5]={6,4,3,2,1};
    for(int ngap=0; ngap<5; ngap++){
        for(int i=0; i<intervalles[ngap]; i++)
           tri_insercion(t, intervalles[ngap], i);
    }
}
