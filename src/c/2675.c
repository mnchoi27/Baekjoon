#include <stdio.h>
#include <string.h>

int main(void) {
    int T, R;
    char S[20];

    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        scanf("%d %s", &R, S);
        /* Output String */
        for(int j = 0; j < strlen(S); j++) {
            for(int k = 0; k < R; k++) // repeat R
                printf("%c", S[j]);
        }
        printf("\n");
    }

    return 0;
}