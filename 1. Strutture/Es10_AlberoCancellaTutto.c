#include <stdio.h>

struct nodo{
    int k;
    struct nodo* sx;
    struct nodo* dx;
};

struct nodo* DeleteFoglie(struct nodo* T){
    if(T == NULL) return NULL;
    if(T -> sx == NULL && T -> dx == NULL){
        //Vuol dire che esiste solo la radice e non ha figli(foglie)
        //Ma viene considerata come foglia in questo caso particolare
        free(T);
        return T;
        if(T -> sx!=NULL)
            T ->sx = DeleteFoglie(T->sx);
        if(T -> sx!=NULL)
          T ->dx =DeleteFoglie(T->dx);
        return T;
    }
}



int main(void){

}