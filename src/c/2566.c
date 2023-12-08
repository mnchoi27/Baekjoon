#include <stdio.h>

int main(void) {
    int col = 0, row = 0, max = 0; // init 
    int arr[9][9];
    /* Input Matrix */
    for(int i = 0; i < 9; i++) { // col
        for(int j = 0; j < 9; j++) { // row
            scanf("%d", &arr[i][j]);
            if(arr[i][j] >= max) { // be careful of duplication
                max = arr[i][j];
                col = i + 1;
                row = j + 1;
            }
        }
    }
    printf("%d\n%d %d", max, col, row);

    return 0;
}