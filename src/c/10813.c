#include <stdio.h>

int main(void) {
    int N, M, arr[101] = { 0, };
    int i, j, temp;
    scanf("%d %d", &N, &M);

    for(int p = 0; p <= N; p++)
        arr[p] = p; // input array
    for(int p = 0; p < M; p++) {
        scanf("%d %d", &i, &j); // swap i and j
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int p = 1; p <= N; p++)
        printf("%d ", arr[p]);
    
    return 0;
}