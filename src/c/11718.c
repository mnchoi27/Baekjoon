#include <stdio.h>

int main(void) {
    char st[101];

    while (scanf("%100[^\n]%*c", st) != EOF) { // cleanup input buffer 
        printf("%s\n", st);
    }

    return 0;
}