#include <stdio.h>

struct nodo{
    int k;
    struct nodo* sx;
    struct nodo* dx;
};


int AlberoContFigliUnici(struct nodo* T){
    if(T == NULL) return 0; //Controllare se vuoto l'albero
    //Esiste la radice ma dobbiamo capire se ha due, 1 o 0 figli
    if(T->sx= NULL){  //Se a sinistra è null vuol dire che 
                      //forse a destra esiste almeno un figlio
        return 1 + AlberoContFigliUnici(T -> dx);
    } else if(T->dx= NULL){ 
        return 1 + AlberoContFigliUnici(T -> sx);
    }else {
        return AlberoContFigliUnici(T -> sx)+AlberoContFigliUnici(T -> dx);;
    }
}

int main(void){

}