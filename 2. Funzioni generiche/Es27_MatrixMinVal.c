#include <stdio.h>


int matrixMin(int** matrix, int nRig, int nCol){
    unsigned int min = 0;
    for(int i=0; i< nRig;i++){
        for(int j=0; j< nRig;j++){
            if(matrix[i][j]< min) min = matrix[i][j];
        }
    }
    return min;
}

int main(void){

}



