#include <stdio.h>

int main(void) {
    int N, arr, min = 1000000, max = -1000000;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr);
        /*division*/
        if(arr < min)
            min = arr;
        if(arr > max)
            max = arr;
    }
    printf("%d %d", min, max);

    return 0;
}