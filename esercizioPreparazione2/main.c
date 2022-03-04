#include <stdio.h>
#include <stdlib.h>

int chiediDim() {
    int n;
    do {
        printf("Inserisci il numero di elementi che vuoi inserire \n");
        scanf("%d",&n);
    } while(n<=0);
    return n;

}

int main()
{
    int  n;
    n=chiediDim();
    int *v = (int*) malloc(n*sizeof(int))

    system("pause");
    return 0;
}
