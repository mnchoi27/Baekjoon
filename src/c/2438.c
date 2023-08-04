#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) { // detect layer
        for(int j = 1; j <= i; j++) // repeat
            printf("*");
        printf("\n");
    }

    return 0;
}