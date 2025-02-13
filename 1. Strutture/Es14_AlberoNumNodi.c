#include <stdio.h>

struct nodo{
    int c;
    struct nodo* sx;
    struct nodo* dx;
};

int NumNodiLiv(struct nodo* T, int k){
    if(T == NULL) return 0;
    //Esiste almeno la radice e quindi 1 nel livello k=0
    if(k==0) return 1;
    int left = 0;
    int right = 0;
    if(T -> sx != NULL) left = NumNodiLiv(T->sx, k-1);
     if(T -> dx != NULL) right =NumNodiLiv(T->dx, k-1);
    return left + right;
}

int main(void){

}