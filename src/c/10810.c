#include <stdio.h>

int main(void) {
    int N, M, arr[101] = { 0, }; // 0 to 100 initialize 0
    int i, j, k;
    scanf("%d %d", &N, &M);

    for(int p = 0; p < M; p++) {
        scanf("%d %d %d", &i, &j, &k);
        for(int q = i; q <= j; q++) // i to j repeat
            arr[q] = k; // assign k
    }
    for(int p = 1; p <= N; p++)
        printf("%d ", arr[p]); // N times repeat

    return 0;
}