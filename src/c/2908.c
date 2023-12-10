#include <stdio.h>

int main(void) {
    int A, B;
    char st1[4], st2[4]; // spacious array

    scanf("%s %s", st1, st2);
    A = (st1[2] - '0') * 100 + (st1[1] - '0') * 10 + (st1[0] - '0');
    B = (st2[2] - '0') * 100 + (st2[1] - '0') * 10 + (st2[0] - '0');
    if(A > B)
        printf("%d\n", A);
    else
        printf("%d\n", B);

    return 0;
}