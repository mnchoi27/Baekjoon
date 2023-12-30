#include <stdio.h>

int main(void) {
    int arr[4] = { 25, 10, 5, 1 };
    int T, C;

    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        scanf("%d", &C);
        for(int j = 0; j < 4; j++) {
            int cnt = C / arr[j]; // cal the number of coin
            C = C % arr[j]; // update the remain
            printf("%d ", cnt);
        }
        printf("\n");
    }

    return 0;
}