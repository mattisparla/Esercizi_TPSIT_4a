#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node*nextptr;
}stnode;

void createNodeList(int n);
void LastNodeDeletetion();
void display();

int main()
{
    int nu, n,num,pos;
    printf("Inserisic il numero dei nodi: ");
    scanf("%d",&n);
    createNodeList(n);
    printf("\n I numeri della lista inseriti");
    displayList();
    return 0;

    system("pause");
    return 0;
}

void createNodeList(n){
    struct node *fnNode,*tmp;
    int num;
    stnode=(struct node*)malloc(sizeof(struct node));
    if(stnode==NULL){
        printf("La memoria non puo essere allocata");
    }else{
        printf("Inserisci il numero1: ");
        scanf("%d",&num);
        stnode->num=num;
        stnode->nextptr=NULL;
        tmp=stnode;

        for(int i=2; i<=n;i++){
            fnNode=(struct node*)malloc(sizeof(struct node));
            if(fnNode==NULL){
                printf("La memoria non puo essre allocata ");
                break;
            }else{
                printf(" memoria....... %d",i);
                scanf("%d",&num);
                fnNode->num=num;
                fnNode->nextptr=NULL;
                tmp->nextptr=fnNode;
                tmp=tmp->nextptr;
            }
        }
    }
}

void LastNodeDeletetion(){
    struct node*toDelLast,*preNode;
    if(stnode==NULL){
        printf("Non ci sono...";)
    }else{
        toDelLast=stnode;
        preNode=stnode;
        while(toDelLast->nextptr != NULL){
            preNode=toDelLast;
            toDelLast=toDelLast->nextptr;

        }
        if(toDelLast==stnode){
            stnode=NULL;
        }else{
            preNode->nextptr=NULL;
        }
        free(toDelLast);
    }
}

void displayList(){
    struct node*tmp;
    if(stnode==NULL){
        printf("Nessun record nella lista vuota");
    }else{
        tmp=stnode;
        while(tmp != NULL){
            printf("Record =%d\n",tmp->num);
            tmp=tmp->nextptr;
        }
    }
}
