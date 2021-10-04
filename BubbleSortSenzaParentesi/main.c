#include <stdio.h>
#include <stdlib.h>
#define DIM 10

void bubbleSort(int vet[ ],int n){
    int sup,k,a;

    for(sup=n-1; sup>0; sup--){
        for(k=0; k<sup; k++){
            if(*(vet+k) > *(vet+k+1)){
                a=*(vet+k+1);
                *(vet+k+1)=*(vet+k);
                *(vet+k)=a;
            }
        }
    }
}

void caricaVettore(int v[ ],int n){
    int k;

    for(k=0; k<n; k++){
        printf("Inserisci un numero : \n");
        scanf("%d",&v[k]);
    }
}

void stampaVettore(char s[ ],int v[ ],int n){
    int k;

    printf("%s \n", s);
    for(k=0; k<n; k++){
        printf("%d \n", v[k]);
    }
}

int main()
{
    int vet[DIM];

    caricaVettore(vet,DIM);
    stampaVettore("vettore inserito: ",vet,DIM);
    bubbleSort(vet,DIM);
    stampaVettore("vettore ordinato: ", vet,DIM);

    printf("\n");

    system("pause");
    return 0;
}
