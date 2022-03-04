#include <stdio.h>
#include <stdlib.h>

/* si scirva una funzione malloc 2d, in grado di allocare una matrice rettangolare
di numeri reali (tipo float ) , le cui dimensioni sono ricevute come parametri . La matrice viene utikizzata
azzerando tutte le caselle.*/

void inserisciNum(float **mat,int nr,int nc) {
    int x,y;

    do {
        printf("a che coordinate x vuoi mettere il numero; ");
        scanf("%d",&x);
    } while(x<0 || x>nr);

    do {
        printf("a che coordinate y vuoi mettere il numero; ");
        scanf("%d",&y);
        printf("che numero vuoi inserire: ");
    }while(y<0 || y>nc);

    float num;
    scanf("%f", &num);

    mat[x][y]=num;
}

void stampa(float **m,int nr,int nc) {

    for(int r=0; r<nr; r++) {
        for(int c=0; c<nc; c++) {
            printf("\t %.2f", m[r][c]);
        }
        printf("\n");
    }
}

int main() {
    int k,nr,nc,r,c;

    printf("Inserisci un numero di righe: ");
    scanf("%d", &nr);
    printf("Inserisci numero di colonne: ");
    scanf("%d", &nc);

    float **m=(float **)malloc(nr * sizeof(float));
    for(k=0; k<nr; k++) {
        m[k]= (float *)malloc(nc*sizeof(float));
    }

    for(r=0; r<nr; r++) {
        for(c=0; c<nc; c++) {
            m[r][c]=0;
        }
    }

    stampa(m,nr,nc);
    inserisciNum(m,nr,nc);
    stampa(m,nr,nc);

    free(m);

    system("PAUSE");
    return 0;
}
