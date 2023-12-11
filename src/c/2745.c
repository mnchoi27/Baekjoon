#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {
    char N[100];
    int B, res = 0;

    scanf("%s %d", N, &B);
    int len = strlen(N);
    for(int i = 0; i < len; i++) {
        char digit = N[len - 1 - i];
        if(isdigit(digit))
            res += (digit - '0') * pow(B, i); // save isNumber
        else
            res += (digit - 'A' + 10) * pow(B, i); // save isAlphabet
    }
    printf("%d\n", res);

    return 0;
}