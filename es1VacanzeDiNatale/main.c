#include <stdio.h>
#include <stdlib.h>
#define MAX 3

/*Considerate una sequenza di interi letti da input e definite una funzione C che li
stampa
in modo tale che tutti i pari precedano i dispari, nello stesso ordine in cui vengono
letti.
Ad esempio, se la sequenza è:
1 , 20 , 35 , 40 , 62 , 51 , 66
La stampa che si vuole ottenere e&#39;
20 , 40 , 62 , 66 , 1 , 35 , 51*/

int testa;
int Pila[MAX];
/*
int menu_scelta(void)
{
  int selezione = 0;
  do
    {
    printf("\n" );
    printf("\n1 -> Aggiungi un dato" );
    printf("\n2 -> Estrai un dato");
    printf("\n3 -> Svuota pila");
    printf("\n4 -> Stampa pila");
    printf("\n5 -> Esci");
    printf("\n" );
    printf("\nEffettua una scelta: " );
    scanf("%d", &selezione );
    }
    while (selezione<1 || selezione>5);
  return selezione;
}*/

void Push() {
	int n;

	if(testa==MAX)
	         printf("\n -> Pila piena" );
	else {
		 printf("\nInserisci un dato: " );
		 scanf("%d", &n);
		 Pila[testa++]=n;
	}
}

void Push2(int num){
      if(testa==MAX)
	         printf("\n -> Pila piena" );
	else {
		 Pila[testa]=num;
		 testa++;
	}
}

void Pop() {
	if(testa==0)
	     printf("\n - Pila vuota" );
	else
	    printf("%d", Pila[--testa]);
}

void Clear() {
	testa=0;
	printf("\n -> Pila svuotata \n" );
}

void Print() {
	int i;
	if(testa==0)
	       printf("\n -> Pila vuota" );
	else
              for(i=testa-1;i>=0;i--)
                  printf("indice i: %d elemento %d\n", i, Pila[i]);

}

void Ordina(){
    int i;
    int k=0;
    int vet[testa];

    for(i=testa-1; i>=0; i--){
        vet[k]=Pila[i];
        k++;
    }
    int n=testa;
    Clear();
    for(k=0; k<n; k++){
        if(vet[k] % 2 ==0){
            Push2(vet[k]);
        }
    }

    for(k=0; k<n; k++){
        if(vet[k] % 2 !=0){
            Push2(vet[k]);
        }
    }
}

int main(){
    int n;
    printf("Inserisci il numero di dati che vuoi inserire: \n");
    scanf("%d",&n);

    for(int k=0; k<n; k++){
        Push();
    }

    Print();
    Ordina();
    Print();
	/*
	int scelta;
	while((scelta=menu_scelta())!=5){
             switch(scelta){
                   case 1:
			Push();
                        break;
                   case 2:
			Pop();
               	        break;
                   case 3:
			Clear();
            	        break;
                   case 4:
			Print();
			break;
	        case 5:
		        break;
             }
    }     */
    system("pause");
    return 0;
}
