#include <stdio.h>


#define Scambia(X, Y) { int temp = X; X = Y; Y = temp;}


int main(void){

    int a=5;
    int b=10;
    Scambia(a, b); //Sempre problemi se si utilizzano operatori con side effect
    printf("a: %d - b: %d",a,b);
}
