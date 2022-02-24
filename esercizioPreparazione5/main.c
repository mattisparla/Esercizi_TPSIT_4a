#include <stdio.h>
#include <stdlib.h>
#define NR 10
#define NC 10

int creaMatrice(int nR,int nC){
    int **mat=(int**)malloc(nR*sizeof(int));
    for(int r=0; r<nC; r++){
        *(mat+r)=(int*)malloc(nC*sizeof(int));
    }

    return mat;
}

void creaPitagorica(int **m,int nR,int nC){
    for(int r=0; r<nR; r++){
        for(int c=0; c<nC; c++){
            m[r][c]=(r+1)*(c+1);
        }
    }
}

void stampaPitagorica(int **m,int nR,int nC){
        for(int r=0; r<nR; r++){
        for(int c=0; c<nC; c++){
            printf("%d  ",m[r][c]);
        }
        printf("\n");
    }
}

int main()
{
  int **mat= creaMatrice(NR,NC);
  creaPitagorica(mat,NR,NC);
  stampaPitagorica(mat,NR,NC);

    system("pause");
    return 0;
}
