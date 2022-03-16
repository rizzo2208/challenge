#include <stdio.h>
#include <stdlib.h>
#define p 1000
int numMenor(int *a[], int dimencion);
int numMayor(int *a[], int dimencion);
int sumPar(int *a[], int dimencion);
void muestra(int M, int m, int sT, int sP);

void main(){

    int ultimo=0, mayor=0, menor=0,suma=0,dim=0,i=0,sumaPar=0;
    int lista[p];


    while(ultimo != -1){
        printf("\nIngrese el Numero:");
        fflush(stdin);
        scanf("%d",&lista[i]);
        ultimo = lista[i];
        suma = suma + lista[i];
        dim++;
        i++;
        }

    menor = numMenor(&lista[dim], dim);
    mayor = numMayor(&lista[dim], dim);
    sumaPar = sumPar(&lista[dim], dim);
    muestra(mayor,menor,suma,sumaPar);
}

int numMenor(int *a[], int dimencion){
    int j=0,i=0,men=0,puntero=0;
    men=*a[0];
    j= dimencion;

    for(i=0; i < j; i++){

        puntero=*a[i];

        if(puntero<men){
            men=puntero;
        }
    }
    return(men);
}

int numMayor(int *a[], int dimencion){

    int j,i,may,puntero1;
    may=*a[0];
    j= dimencion;

    for(i=0; i < j; i++){

        puntero1=*a[i];

        if(puntero1>=may){
            may=puntero1;
        }
    }
    printf("valor de may:%d",may);
    system("pause");
    return(may);
}

int sumPar(int *a[], int dimencion){

    int pares,i,j,rev;
    j=dimencion;

    for(i=0;i<j;i++){
        rev=*a[i];

        if(rev % 2 == 0){
            pares = pares + rev;
        }
    }
    return(pares);
}

void muestra(int May, int min, int sTotal, int sPares){
    int elMayor, elMenor, sumaTotal, sumaDePar;

    elMayor= May;
    elMenor= min;
    sumaTotal=sTotal;
    sumaDePar=sPares;

    printf("El Mayor Numero Ingresado Es: %d\n",elMayor);
    printf("El Menor Numero Ingresado Es: %d\n",elMenor);
    printf("La Suma Total Ingresada Es: %d\n",sumaTotal);
    printf("La Suma De Pares Ingresados Es: %d\n",sumaDePar);
}
