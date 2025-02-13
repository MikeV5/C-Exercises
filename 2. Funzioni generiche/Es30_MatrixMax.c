#include <stdio.h>
#include <stdlib.h>

int matrixMax(int** matrix, int nRig, int nCol){
    int max = matrix[0][0];
    for(int i=0; i< nRig;i++){
        for(int j=0; j< nCol;j++){
            if(matrix[i][j] > max) max = matrix[i][j];
        }
    }
    return max;
}

int main(void){

}