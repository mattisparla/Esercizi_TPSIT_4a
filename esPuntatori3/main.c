#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LUNG 20
#define NUMCAR 10

/*Scrivere
un programma che data una stringa in input dica se la stessa contiene almeno
una ‘A’ tra i primi 10 caratteri.*/

void chiediStringa(char s[ ]){
    printf("Inserisci una parola \n");
    gets(s);
}

void controllo(char s[ ],int n,bool *ok){
    int k=0;

    while(k<n && *ok==false){
        if(s[k] == 'a'){
            *ok=true;
        }
        k++;
    }

}

int main()
{
    int n = 40;
char *s = (char*)malloc(n*sizeof(char));
    chiediStringa(s);

    bool ok;
    ok=false;
    controllo(s,NUMCAR,&ok);

    if(ok==true){
        printf("e' presente una a \n");
    }else{
        printf("Non e' presnete una a \n");
    }

    system("pause");
    return 0;
}
