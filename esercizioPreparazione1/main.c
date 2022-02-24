#include <stdio.h>
#include <stdlib.h>

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

    do {
        printf("Inserisci il numero di righe: ");
        scanf("%d",&nr);
    } while(nr<=0);

    do {
        printf("Inserisci il numero di colonne: ");
        scanf("%d",&nc);
    } while(nr<=0);

    float **m=(float **)malloc(nr * sizeof(float));
    for(k=0; k<nr; k++) {
        m[k]= (float *)malloc(nc*sizeof(float));
    }

    for(r=0; r<nr; r++) {
        for(c=0; c<nc; c++) {
            printf("Inserisci numero in posizione [%d][%d]",r,c);
            scanf("%f",&m[r][c]);
        }
    }

    stampa(m,nr,nc);


    system("pause");
    return 0;
}
