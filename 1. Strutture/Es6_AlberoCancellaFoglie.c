#include <stdio.h>


struct nodo{
    int info;
    struct nodo* sx;
    struct nodo* dx;
};

//Dobbiamo cancellare tutte le foglie
struct nodo* CancellaFoglie(struct nodo* T){
    if(T == NULL) return NULL; //Se l'albero è vuoto
    //Vuol dire che esiste almeno la radice
    //Verifico se a sinistra e a destra della radice siano vuoti
    if(T -> sx == NULL && T -> dx == NULL){
    //Significa che non ha figli e solo esiste la radice
        free(T); 
        return NULL;
    }
    
    //Ricorsione che andrà avanti fino alle radici di ognuna
    T->sx = CancellaFoglie(T -> sx);
    T->dx = CancellaFoglie(T -> dx);
    return T;
};

int main(void){

}