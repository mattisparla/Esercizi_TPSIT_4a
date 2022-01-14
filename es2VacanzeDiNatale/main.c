#include <stdio.h>

#define MAX 3

int testa;
int Pila[MAX];

void Push() {
	char c;

	if(testa==MAX)
	         printf("\n -> Pila piena" );
	else {
		 printf("\nInserisci un carattere: " );
		 fflush(stdin);
		 scanf("%c", &c);
		 Pila[testa++]=c;
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
	printf("\n -> Pila svuotata" );
}

void Print() {
	int i;
	if(testa==0)
	       printf("\n -> Pila vuota" );
	else
              for(i=testa-1;i>=0;i--)
                  printf("indice i: %d elemento %d\n", i, Pila[i]);

}

void Inverso(){
    int i;
    int k=0;
    int vet[testa];

    for(i=testa-1; i>=0; i--){
        vet[k]=Pila[i];
        k++;
    }

    int n=testa;
    ordinaVettore(vet,n);
    Clear();

    for(k=0; k<n; k++){
        Push2(vet[k]);
    }
}

void ordinaVettore(int vett[], int n){
    int sup, k, a;

    for(sup = n - 1; sup > 0; sup--){

        for(k = 0; k < sup; k++){
            if(vett[k] < vett[k+1]){
                a = vett[k + 1];
                vett[k + 1] = vett[k];
                vett[k] = a;
            }
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
        Inverso();
        Print();

    system("pause");
    return 0;
}
