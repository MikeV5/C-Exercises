#include <stdio.h>


#define Mediana(a,b,c) (a>b)? ((a<c)?(a):((b<c)?(c):(b))): ((a>c)?(a):((c<b)?c:(b)))
//Stare attento alle parentesi: ogni graffa corrisponde ad una parentesi
int MedianaT(int a, int b, int c);
#define ODD(x) (x%2)
int main(void){

//printf("%d",Mediana(1,2,20));
printf("%d",ODD(0));

}

int MedianaT(int a, int b, int c){
    int temp;
    if( a > b ){
        if(a < c ){
            return a;
        }else if(b < c){
             return c;   
        }else return b;
    }else{
        if(a > c){
            return a;
        }else if(c < b){
            return  c;
        }else return b;
    }

}