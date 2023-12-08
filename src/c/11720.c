#include <stdio.h>

int main(void) {
    int N, sum = 0;
    char st[100];

    scanf("%d", &N);
    scanf("%s", st); // input AS string
    for(int i = 0; i < N; i++)
        sum += st[i] - '0'; // ASCII sub 48
    printf("%d", sum); // output AS integer

    return 0;
}