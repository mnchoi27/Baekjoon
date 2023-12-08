#include <stdio.h>

int main(void) {
    int N, M;
    int arr1[100][100];
    int arr2[100][100];

    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    /* Perform Matrix Addition */
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}