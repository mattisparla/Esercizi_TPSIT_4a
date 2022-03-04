#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNG 1000


void caricaStringa(char nomeFile[],char v[], int nMax,int *n) {
    FILE *fp;
    int k;

    fp = fopen (nomeFile, "r");
    if(fp == NULL) {
        printf("IL FILE NON ESISTE\n");
    } else {

        k=0;
        while(k < nMax && (fscanf(fp,"%c", &v[k]) != EOF)){
                k++;
              }
                *n=k;
                fclose(fp);
    }
}

void Inverti(char s[ ],int n) {
    int k;

    for(k=0; k<n; k++) {
        if(s[k]>=97 && s[k] <=122) {
            s[k]=s[k]-32;
        }
    }

}

void salva(char nomeFile[], char vett[], int n){
    FILE *fp;
    int k;

    fp = fopen(nomeFile, "w");

    if(fp == NULL){
        printf("ERRORE NELL'APERTURA DEL FILE");
    }else{

        fprintf(fp, "%s \n", vett);

        fclose (fp);
    }
}

void stampaVet(char v[ ],int n){
    printf("%s \n", v);
}

int main() {
    int n = 256;

    char *s = (char*) malloc(n*sizeof(char));

    caricaStringa("stringa.txt",s,LUNG,&n);
    Inverti(s,n);
    stampaVet(s,n);
    salva("TuttoMaiuscolo.txt",s,n);

    system("pause");
    return 0;
}
