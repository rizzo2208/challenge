#include <stdio.h>
#include <stdlib.h>
#define p 1000

//definicion de funciones.

int numMenor(int *a[], int dimencion);
int numMayor(int *a[], int dimencion);
int sumPar(int *a[], int dimencion);
void muestra(int M, int m, int sT, int sP);

void main(){
    
    //inicializo variables.
    
    int ultimo=0, mayor=0, menor=0,suma=0,dim=0,i=0,sumaPar=0;
    int lista[p];

    //guardo en un array todos los valores que ingrese el usuaro hasta que ingrese -1.
    
    while(ultimo != -1){
        printf("\nIngrese el Numero:");
        fflush(stdin);
        scanf("%d",&lista[i]);
        ultimo = lista[i];
        suma = suma + lista[i];
        dim++;
        i++;
        }

    menor = numMenor(&lista[dim], dim);// envio el array a la funcion(metodo) para obtener el menor valor y gurdarlo en una variable.
    mayor = numMayor(&lista[dim], dim);// envio el array a la funcion(metodo) para obtener el mayor valor y gurdarlo en una variable.
    sumaPar = sumPar(&lista[dim], dim);// envio el array a la funcion(metodo) para obtener los valores par, sumarlos y gurdar el valor resultante en una variable.
    muestra(mayor,menor,suma,sumaPar);// envio las varibles a la funcion(metodo) para mostrar por pantalla.
}

int numMenor(int *a[], int dimencion){
   
    int j=0,i=0,men=0,puntero=0; //variables locales.
    men=*a[0]; //igualo men a la primer posicion del array.
    j= dimencion; //guardo la dimencion del array en j para recorrerlo

    //recorro el array.
    
    for(i=0; i < j; i++){

        puntero=*a[i]; //igualo el puntero a valor de la posicion del array.
           
        // comparacion para guardar el menor valor.
        if(puntero<men){
            men=puntero;
        }
    }
    return(men); //retorno el menor valor.
}

int numMayor(int *a[], int dimencion){ 

    int j,i,may,puntero1; //variables locales.
    may=*a[0]; //igualo men a la primer posicion del array.
    j= dimencion; //guardo la dimencion del array en j para recorrerlo.
    
    //recorro el array.
    for(i=0; i < j; i++){

        puntero1=*a[i]; //igualo el puntero a valor de la posicion del array.
        
        // comparacion para guardar el mayor valor.
        if(puntero1>=may){
            may=puntero1;
        }
    }
    return(may); //retorno el mayor valor.
}

int sumPar(int *a[], int dimencion){

    int pares,i,j,rev; //variables locales
    j=dimencion; //guardo la dimencion del array en j para recorrerlo.
    
    //recorro el array.
    for(i=0;i<j;i++){
        
        rev=*a[i]; //igualo el rev a valor de la posicion del array.

        // verifico si el numero es par, siendo asi, los acumulo en una variable
        if(rev % 2 == 0){
            pares = pares + rev;
        }
    }
    return(pares);// devuelvo variable con la sumatoria de pares.
}

void muestra(int May, int min, int sTotal, int sPares){
    int elMayor, elMenor, sumaTotal, sumaDePar; //inicializo variables locales.
    
    // resivo por valor las variables del main y los cargo en variables locales.

    elMayor= May;
    elMenor= min;
    sumaTotal=sTotal;
    sumaDePar=sPares;
    
    // se imprime por pantalla los resultados.
    
    printf("El Mayor Numero Ingresado Es: %d\n",elMayor);
    printf("El Menor Numero Ingresado Es: %d\n",elMenor);
    printf("La Suma Total Ingresada Es: %d\n",sumaTotal);
    printf("La Suma De Pares Ingresados Es: %d\n",sumaDePar);
}
