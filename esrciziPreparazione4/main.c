#include <stdio.h>
#include <stdlib.h>
/*Calcolare la somma degli elementi di posizione pari e quelli di posizione dispari
di un vettore*/

void caricaVettore(int v[ ],int n){
    int *p;

    for(p=v; p<v+n; p++){
        printf("Inserisci un numero : ");
        scanf("%d",p);
    }
}

void calcola(int v[ ],int n/*,int *sP,int *sD*/){
    int k;
    int sP=0;
    int sD=0;

    for(k=0; k<n; k++){
        if(k%2 == 0){
            sP=sP+ *(v+k);
        }else{
            sD=sD+ *(v+k);
        }
    }
    printf("Somma pari: %d ||| Somma dispari: %d",sP,sD);
}

int main()
{
    int n=10;
    int *v=(int*)malloc(n*sizeof(int));

    caricaVettore(v,n);
  //  int *sommaP;
 //   int *sommaD;
    calcola(v,n/*,&sommaP,&sommaD*/);
 // printf("Somma pari: %d", *sommaP);
 // printf("Somma dispari: %d", *sommaD);
 free(v);

    system("pause");
    return 0;
}
