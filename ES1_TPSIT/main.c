#include <stdio.h>
#include <stdlib.h>
#define LUNG 20

/*si scriva un programma che :
-definisce un tipo di dato Studente. Ogni studente è caraterizzato da un nome, un cognome e una matricola.
-acquisisca i dati di 10 studenti e per ogni nuovo studente, procede ad un inserimento ordinato (lo scopo
dell'esecizio è ordinare gli studenti durante il processo di inserimento degli stessi e non dopo averli inseriti tutti con un algoritmo di ordinamento).*/

typedef struct{
    char nome[LUNG];
    char cognome[LUNG];
    int matricola;
}Studente;

int main()
{
    Studente classe[10];

    Studente tmp;
    int i,numEl;
    for(numEl=0;numEl<MAX_NUM_EL;numEl++){
        printf("Inserisci le informazioni dello studente \n:");
        printf("nome :");
        scanf("%s",tmp.nome);
        printf("cognome: ");
        scanf("%s",tmp.cognome);
        printf("matricola: ");
        scanf("%d",&tmp.matricola);

      /*  if(numEl==0){

    }else{
        i=0;
        while(i<numEl && classe[i].matricola<tmp.matricola)
            i++;

        j=numEl;
        while(j>i){
            a[j]=a[j-1];
        }
    }

    system("pause");
    return 0;
}
