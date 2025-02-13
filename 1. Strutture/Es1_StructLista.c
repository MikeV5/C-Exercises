#include<stdio.h>
#include<stdlib.h>
struct nodo {
    short cifra;
    struct nodo *next;
};

typedef struct nodo nodo;

nodo* ToList(unsigned int n){
    nodo * pt1 = (nodo*)malloc(sizeof(nodo));
    nodo * pt2 = pt1;
    while(n/10 !=0){
        pt2 -> next = (nodo*) malloc(sizeof(nodo));
        pt2 -> cifra = n%10;
        pt2 = pt2 -> next;
        n = n / 10;
    }
    pt2->cifra=n;
    pt2->next = NULL;
    
    return pt1;
}

void stampa_lista(struct nodo* testa) {
    struct nodo* curr = testa;
    while (curr != NULL) {
        printf("%d ", curr->cifra);
        curr = curr->next;
    }
    printf("\n");
}

int main(){
    unsigned int numero = 123;
    struct nodo* lista_cifre = ToList(numero);
    stampa_lista(lista_cifre);
    //Devo sempre liberare la memoria allocata
    free(lista_cifre);
    return 0;
}