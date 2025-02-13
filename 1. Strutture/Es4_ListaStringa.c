#include <stdio.h>
#include <stdlib.h>


struct nodo{
    char info;
    struct nodo* next;
};
typedef struct nodo nodo;
char* ListToArray(struct nodo* lista){
    char* array;
    struct nodo *pt1 = lista;
    int lungh = 0;
    int i = 0;
    //array = (nodo*)malloc(sizeof(nodo));
    while(pt1!=NULL){
        pt1 = pt1 -> next;
        lungh++; //Per calcolare la lunghezza della lista
    }
    //oppure
    array = (char*)malloc(lungh*sizeof(char));
    //Ora dobbiamo passare i caratteri dalla lista all'array
    while(lista!=NULL){
        array[i] = lista ->info; 
        lista = lista -> next;
        i++;
    }
    array[lungh]='\0';
    return array;
}

int main(void){
    nodo* nodo1 = (nodo*)malloc(sizeof(nodo));
    nodo* nodo2 = (nodo*)malloc(sizeof(nodo));
    nodo* nodo3 = (nodo*)malloc(sizeof(nodo));
    nodo1->info = 'a';
    nodo1->next = nodo2;

    nodo2->info = 'b';
    nodo2->next = nodo3;

    nodo3->info = 'c';
    nodo3->next = NULL;
    
    char* array = ListToArray(nodo1); // Devo passare il puntatore al primo elemento
                                      //  quindi nodo1
    int i=0;

    //stampa_lista(nodo1);

    int lunghezza = sizeof(array) / sizeof(char); // Calcola la lunghezza del vettore

    // Stampa gli elementi del vettore utilizzando un ciclo while
    
   for (int i = 0; i < lunghezza; i++) {
        printf("%c ", array[i]);
    }

}