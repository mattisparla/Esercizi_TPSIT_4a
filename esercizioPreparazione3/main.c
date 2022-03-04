#include <stdio.h>
#include <stdlib.h>

void caricaVettore(int v[ ],int n){
    int *p;

    for(p=v; p<v+n; p++){
        printf("Inserisci un numero : ");
        scanf("%d", p);
    }
}

int calcolaSuperiore(int v[ ],int n,int x){
    int *p;
    int conta=0;


    for(p=v; p<v+n; p++){
        if(*p > x){
            conta++;
        }
    }
    return conta;
}

int main()
{
    int n=10;
    int *v=(int*) malloc (n*sizeof(int));
    int x;

    caricaVettore(v,n);
    printf("\n INSERISCI NUMERO PER CACLOLARE I SUPERIORI \n");
    scanf("%d",&x);
    int i=calcolaSuperiore(v,n,x);
    printf("Numeri superiori: %d", i);

    free(v);

    system("pause");
    return 0;
}
