#include <stdio.h>

#define Cubo(a) ((a) * (a) * (a)) //Parentesi interne per forzare l'ordine di valutazione

//Problemi se viene passata variabili con side effect (++a o a++)
int main(void){
    int x = 3;
    int num = Cubo(++x); //A seconda del compilatore
                         // In teoria dovrebbe stampare 120 (x incrementata 3 volte)

    printf("%d", num); 
}