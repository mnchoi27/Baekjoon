#include <stdio.h>

int main(void) {
    int dgt[32];
    int N, B, idx = 0;

    scanf("%d %d", &N, &B);
    // convert N to base B
    while(N > 0) {
        dgt[idx++] = N % B;
        N = N / B;
    }
    /* print the digits in reverse order */
    for(int i = idx - 1; i >= 0; i--) {
        if (dgt[i] >= 10) {
            // if over 10, convert al
            printf("%c", 'A' + (dgt[i] - 10));
        }
        else {
            printf("%d", dgt[i]);
        }
    }

    return 0;
}