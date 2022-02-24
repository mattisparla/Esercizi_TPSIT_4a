#include <stdio.h>
#include <stdlib.h>

/*Esercizio 1
Scrivere un programma per leggere e stampare array bidimensionale di float. Il
programma richiede all’utente il numero di righe e di colonne dopo di che richiede ad
uno ad uno gli elementi da inserire nell&#39;array.  Il programma inserisce in un secondo
array unidimensionale i numeri più grandi di ogni riga. Allocare e deallocare l’array
restituito.*/

void caricaMatrice(float **m,int nR,int nC){
        for(int r=0; r<nR; r++){
        for(int c=0; c<nC; c++){
            printf("Inserisci un numero: ");
            scanf("%f",&m[r][c]);
        }
    }
}

void stampaMatrice(float **m,int nR,int nC){
        for(int r=0; r<nR; r++){
        for(int c=0; c<nC; c++){
            printf("%f ", m[r][c]);
        }
        printf("\n");
    }
}

void calcolaSuperiori(float **m,int nR,int nC,int v[ ]){
    inizializzaV(v,nR);

    for(int r=0; r<nR; r++){
        for(int c=0; c<nC; c++){
            if(m[r][c] > v[r]){
                v[r]=m[r][c];
            }
        }
    }
}

void stampaVet(float *v,int n){
    for(int k=0; k<n; k++){
        printf("%f ",v[k] );
    }
}

void inizializzaV(float *v,int n){
    for(int k=0; k<n; k++){
        v[k]=0;
    }
}

int main()
{
    int nr,nc;

    printf("Inserisci un numero di righe: ");
    scanf("%d", &nr);
    printf("Inserisci numero di colonne: ");
    scanf("%d", &nc);

    float **m=(float **)malloc(nr * sizeof(float));
    for(int k=0; k<nr; k++) {
        m[k]= (float *)malloc(nc*sizeof(float));
    }

    caricaMatrice(m,nr,nc);
    stampaMatrice(m,nr,nc);

    int n=nr;
    float *v=(float*)malloc(n*sizeof(float));

    calcolaSuperiori(m,nr,nc,v);
    stampaVet(v,nr);

    free(m);
    free(v);

    system("pause");
    return 0;
}
