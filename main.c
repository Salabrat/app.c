
#include <stdio.h>

int main() {
    int array[5][3]; 
    int array1[5] = {1, 2, 3, 4, 5}; 
    int array2[5] = {6, 7, 8, 9, 10};    
 int array3[5] = {11, 12, 13, 14, 15}; 
    for (int i = 0; i < 5; i++) {
        array[i][0] = array1[i];
        array[i][1] = array2[i];
        array[i][2] = array3[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
