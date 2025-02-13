#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int info;
    struct nodo* next;
};

int* ListToArray(struct nodo* lista){ //int* perché è un vettore e quindi un puntatore
    int* vet;
    int i=0;
    int length = 0;
    struct nodo* pt = lista; //lista temporale per scorrerla
    if(lista == NULL) return NULL;
    // Scorriamo la lista per salvare i dati nel vettore
    while(pt!= NULL){ 
        pt = pt -> next;
        length++; //Numero di elementi della lista per ora creare il vettore
    }
    // Dobbiamo allocare spazio per il vettore
    vet = (int*)malloc(length*(sizeof(int))); //Alloco per ogni posizione la dimensione di un int
    //Ora scorriamo la lista per salvare i dati nel vet
    while(lista!=NULL){
        vet[i] = lista->info; 
        lista = lista -> next;
        i++;
    }
    return vet;
}

void stampa_lista(struct nodo* testa) {
    struct nodo* curr = testa;

    while (curr != NULL) {
        printf("%d ", curr->info);
        curr = curr->next;
    }

    printf("\n");
}
typedef struct nodo nodo;
int main(){
    nodo* nodo1 = (nodo*)malloc(sizeof(nodo));
    nodo* nodo2 = (nodo*)malloc(sizeof(nodo));
    nodo* nodo3 = (nodo*)malloc(sizeof(nodo));
    nodo1->info = 1;
    nodo1->next = nodo2;

    nodo2->info = 2;
    nodo2->next = nodo3;

    nodo3->info = 3;
    nodo3->next = NULL;
    
    int* vettore = ListToArray(nodo1); // Devo passare il puntatore al primo elemento
                                      //  quindi nodo1
    int i=0;

    //stampa_lista(nodo1);

    int lunghezza = sizeof(vettore) / sizeof(int); // Calcola la lunghezza del vettore

    // Stampa gli elementi del vettore utilizzando un ciclo while
    
   for (int i = 0; i < lunghezza; i++) {
        printf("%d ", vettore[i]);
    }

    return 0;
}