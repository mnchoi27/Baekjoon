#include <stdio.h>

int main(void) {
    int a, b;

    for( ; ; ) { // infinite loop
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0)
            break; // termination
        printf("%d\n", a + b);
    }

    return 0;
}