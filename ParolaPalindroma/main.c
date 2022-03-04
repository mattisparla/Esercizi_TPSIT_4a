#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNG 20

/* scirvere un programma che verifichi se la stringa data in input è paindroma o no */

void chiediStringa(char s[ ],int *n) {
    printf("Inserisci una parola : \n");
    fflush(stdin);
    gets(s);

    *n=strlen(s);
}

void controllo(char s[ ],int n) {
    char aus[LUNG];
    int k,i;

    i=0;

    for(k=n-1; k>=0; k--) {
        aus[k]=s[i];
        i++;
    }

    if(strcmp(s,aus)==0){
        printf("\n%s e' palindroma.",s);
    }else{
        printf("\n%s non e' palindroma.",s);
    }
}

int main() {
    int n = 256;

    char *s = (char*) malloc(n*sizeof(char));

    chiediStringa(s,&n);
    controllo(s,n);

    system("pause");
    return 0;
}
