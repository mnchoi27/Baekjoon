#include <stdio.h>

int main(void) {
    int a, b;

    while(scanf("%d %d", &a, &b) != EOF) // end of file
        printf("%d\n", a + b);

    return 0;
}