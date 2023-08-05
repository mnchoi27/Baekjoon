#include <stdio.h>

int main(void) {
    int N, X, res;
    scanf("%d %d", &N, &X);

    for(int i = 0; i < N; i++) {
        scanf("%d", &res);
        if(res < X) // detect less than X
            printf("%d ", res);
    }

    return 0;
}