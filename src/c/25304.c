#include <stdio.h>

int main(void) {
    int X, N, a, b;
    int res = 0; // initialize 0
    scanf("%d\n%d", &X, &N);

    for(int i = 0; i < N; i++) { // purchase item repeat
        scanf("%d %d", &a, &b);
        res += a * b;
    }

    if(res == X)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}