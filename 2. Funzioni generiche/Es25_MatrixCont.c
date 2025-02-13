#include <stdio.h>

int ContCharMatrix(char** matrix, int nRig, int nCol, char c){
    int contChar = 0;

    for(int i=0; i < nRig; i++){
        for(int j=0; i < nCol; j++){
            if(matrix[i][j]== 'c'){
                contChar++;
            }
        }
    }
    return contChar;
}


int main(void){

}


