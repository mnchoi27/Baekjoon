#include <stdio.h>

int main(void) {
    int N, K, cnt = 0;

    scanf("%d %d", &N, &K);
    for(int i = 1; i <= N; i++) {
        if(N % i == 0) {
            cnt++;
            if(cnt == K) {
                printf("%d", i);

                return 0; // if Kth is a divisor, end
            }
        }
    }
    if(cnt < K)
        printf("0"); // if no Kth divisor

    return 0;
}