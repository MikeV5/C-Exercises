#include <stdio.h>

struct nodo{
    int val;
    struct nodo* sx;
    struct nodo* dx;
};


int NumFoglie(struct nodo* T){
    int left =0;
    int right = 0;
    if(T == NULL) return 0;
    if(T -> sx == NULL && T -> dx == NULL ) return 1;
    left = NumFoglie(T-> sx);
    right = NumFoglie(T-> dx);
    return left + right;
};

int main(void){

}