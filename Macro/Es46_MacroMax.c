#include <stdio.h>

#define max(a,b)  ((a>b)?(a):(b))
//Sempre chiudere tutto tra parentesi tonde
//Problemi nel caso si utilizzino operatori con side effect. Ad esempio max(++a,++b)
int maxT(int a, int b);

int main(void){

    printf("%d",max(29,25));
}


int maxT(int a, int b){
   if(a > b){
        return a;
    }else return b;
}


