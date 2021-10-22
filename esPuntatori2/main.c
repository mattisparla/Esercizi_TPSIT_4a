#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void caricaVettore(int v[ ],int n) {
    int k;

    for(k=0; k<n; k++) {
        printf("Inserisci un numero \n");
        scanf("%d", &v[k]);
    }
}

void invertiVettore(int v[ ],int n) {
    int k,j,a;
    j=n-1;

    for(k=0; k<(n/2); k++) {
        a=v[j];
        v[j]=v[k];
        v[k]=a;

        j--;
    }
}

void stampaVettore(int v[ ],int n) {
    int k;

    for(k=0; k<n; k++) {
        printf("%d \n", v[k]);
    }
}

int chiediDim() {
    int n;
    do {
        printf("Inserisci il numero di elementi che vuoi inserire \n");
        scanf("%d",&n);
    } while(n<=0);
    return n;

}

int main() {
    int  n;
    n=chiediDim();
    int v[n];

    caricaVettore(v,n);
    invertiVettore(v,n);
    stampaVettore(v,n);


    system("pause");
    return 0;
}
