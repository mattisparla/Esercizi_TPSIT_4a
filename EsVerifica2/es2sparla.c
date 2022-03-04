#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 10
/*Scrivere un programma che legga da file verifica.dat:
- Numero di elementi dell’array di float (prima riga)
- Riempie un array con i valori float contenuti dalla seconda riga in poi*/

void leggi(char nomeFile[],float *v, int nMax, int *n) {
    FILE *fp;
    int k;
    float primoValore;

    fp = fopen (nomeFile, "r");
    if(fp == NULL) {
        printf("IL FILE NON ESISTE\n");
    } else {
        k=0;

        fscanf(fp,"%f", &primoValore);// tolgo il primo valore
        while(k < nMax && (fscanf(fp,"%f", v[k]) != EOF)) {
        }
        *n = k;
        fclose(fp);
    }
    printf("\n Il numero di elementi della prima riga era: %d \n", primoValore);
}

void stampaVet(float *v,int n){
    for(int k=0; k<n; k++){
        printf("%f ",v[k] );
    }
}

int main()
{
    float *v=(float*)malloc(DIM*sizeof(float));
    int n;
    leggi("verifica.dat",v,DIM,&n);
    printf("\nVettore con elementi senza la prima riga : \n");
    stampaVet(v,n);

    free(v);

    system("pause");
    return 0;
}
