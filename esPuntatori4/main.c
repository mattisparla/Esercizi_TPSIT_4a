#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNG 20

/* si scriva un programma che chieda all'utente 2 stringhe e concateni
 la seconda alla fine della prima, NON si usi la funzione strcat della libreria standard ,
 si usino i puntatori e non la notazione vettoriale.
 Attenzione a terminarla con il carattere '/0'*/

 void chiediStringa(char s[ ],int *n){
    printf("Inserisci una parola \n ");
    scanf("%s", s);
    *n=strlen(s);
 }

 void concatena(char s1[ ],int n1,char s2[ ],int n2){
    int k,j;
    j=0;

    for(k=n1; j<n2; k++){
        s1[k]=s2[j];
        j++;
    }
 }

int main()
{
    int n = 40;
    char *s1 = (char*)malloc(n*sizeof(char));
    char *s2 = (char*)malloc(n*sizeof(char));
    int n1,n2;

    chiediStringa(s1,&n1);
    chiediStringa(s2,&n2);

    concatena(s1,n1,s2,n2);

    printf("stringhe insieme --> %s\n",s1);


    system("pause");
    return 0;
}
