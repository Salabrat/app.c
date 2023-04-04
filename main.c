#include <stdio.h>

int main() {
    int array[3][5]; 
    int array1[5] = {1, 2, 3, 4, 5}; 

    int array2[5] = {6, 7, 8, 9, 10}; 

    int array3[5] = {11, 12, 13, 14, 15}; 

    for (int i = 0; i < 5; i++) {
        array[0][i] = array1[i];
        array[1][i] = array2[i];
        array[2][i] = array3[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
