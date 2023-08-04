#include <stdio.h>

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) // i < n, bool = true
        sum += i; // initialize sum = 0, i = 1
    printf("%d\n", sum);

    return 0;
}