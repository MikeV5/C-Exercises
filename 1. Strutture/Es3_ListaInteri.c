#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int info;
    struct nodo* next;
};

/*Simile all'esercizio precedente ma in questo modifichiamo
direttamente la lista nella funzione(void)*/
void DelLast(struct nodo **lista){
    struct nodo *pt1,*pt2;
    if(*lista == NULL) return;
    pt2 = *lista; //pt2 modificherà direttamente lista
    pt1 = pt2 -> next; //Usiamo un pt1 per per spostare pt2 
    while(pt1!= NULL){ //Iniziamo a scorrere
        //Siccome ora pt2 modifica direttamente lista dobbiamo assegnarlo a pt1
        pt2 = pt1;
        pt1 = pt1 -> next;
    };
    //Se l'ultimo elemento è l'ultimo allora basta eliminare la lista
    if(pt2==*lista) *lista=NULL;
    //Altrimenti cancelliamo elemento (ultimo puntato da pt2)
    free(pt2);
};

void stampa_lista(struct nodo* testa) {
    struct nodo* curr = testa;
    while (curr != NULL) {
        printf("%d ", curr->info);
        curr = curr->next;
    }
    printf("\n"); 
};

typedef struct nodo nodo;
int main(void){
    nodo* nodo1 = (nodo*)malloc(sizeof(nodo));
    nodo* nodo2 = (nodo*)malloc(sizeof(nodo));
    nodo* nodo3 = (nodo*)malloc(sizeof(nodo));

    nodo1->info = 10;
    nodo1->next = nodo2;

    nodo2->info = 20;
    nodo2->next = nodo3;

    nodo3->info = 30;
    nodo3->next = NULL;

    // Creiamo una lista e lo facciamo puntatore al nodo1
    //(nodo che è legato a nodo2 e questo a nodo3)
    nodo* lista = nodo1;

    stampa_lista(lista);
    // Chiamata alla procedura DelLast per cancellare l'ultimo elemento
    DelLast(&lista);
    printf("%d -> %d\n", 
    lista->info, lista->next->info);
    //stampa_lista(lista);
    // Stampa della lista dopo la cancellazione
    //stampa_lista(lista);
}