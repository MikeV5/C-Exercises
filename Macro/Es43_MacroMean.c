#include <stdio.h>

#define Mean(a,b) (((a)+(b))/2)

int main(void){
    printf("%d",Mean(12,14));
    //Problemi quando si usano operatori con side effect Mean(++x,++x)
}