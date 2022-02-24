#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 100


typedef struct {
    char num[DIM];
    char titFilm[DIM];
    char genere[DIM];
    char annoUscita[DIM];
    char dispo[DIM];
} Cinema;

int contaRighe(char nomeFile[]){
    int n;
    FILE *fp;
    char stringa[DIM];
    int conta= 0;

    fp=fopen(nomeFile,"r");
    while(fgets(stringa,DIM, fp)!= EOF){
        conta++;
    }
    fclose(fp);
    return conta;
}

void caricaVett(Cinema v[], int n, char nomeFilm[],int *conta) {
    FILE *fp;
    int c=0;
    int i;
    char line[100];

    fp = fopen(nomeFilm, "r");

    for(i = 0;i < n; i++){
        fgets(line, 100, fp);
        char* pezzo = strtok(line, ",");

        while(pezzo != NULL){
            switch(c){
            case 0:
                strcpy((v+i)->num, pezzo);
                break;
            case 1:
                strcpy((v+i)->titFilm, pezzo);
                break;
            case 2:
                strcpy((v+i)->genere, pezzo);
                break;
            case 3:
                strcpy((v+i)->annoUscita, pezzo);
                break;
            case 4:
                strcpy((v+i)->dispo, pezzo);
                break;
            }
            c++;
            pezzo = strtok(NULL, ",");
        }
        c=0;
    }
    *conta=i;
    fclose(fp);
}

void stampVett(Cinema v[], int n){
    for(int k = 0;k < n ;k++){
        printf("%s\t%30s\t%30s\t%10s\t%20s", (v+k)->num, (v+k)->titFilm, (v+k)->genere, (v+k)->annoUscita, (v+k)->dispo);
    }
}



int main() {
    int n;
    Cinema *film;
    n=contaRighe("listafilm.csv.txt");
    film= (Cinema*) malloc(n* sizeof (Cinema));

    int conta;
    caricaVett(film,DIM, "listafilm.csv.txt",&conta);
    stampVett(film, DIM);

    free(film);
    return 0;
}
