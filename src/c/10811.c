#include <stdio.h>

int main(void) {
    int N, M, i, j;
    int arr[100] = { 0, };

    scanf("%d %d", &N, &M);
    for(int a = 0; a < N; a++)
        arr[a] = a + 1; // input num TO arr
    /* repeat M times */
    for(int a = 0; a < M; a++) {
        scanf("%d %d", &i, &j);
        for(int b = i - 1; b < j; b++) {
            int temp = arr[b];
            arr[b] = arr[j - 1];
            arr[j - 1] = temp;
            j--; // add i AND sub j
        }
    }
    for(int a = 0; a < N; a++) // output arr
        printf("%d ", arr[a]);
    
    return 0;
}