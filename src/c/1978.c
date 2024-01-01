#include <stdio.h>

int main(void) {
    int N, cnt = 0;

    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < 2) continue;

        int is_prime = 1;
        for(int j = 2; j * j <= arr[i]; j++) {
            if(arr[i] % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if(is_prime) cnt++;
    }
    printf("%d", cnt);

    return 0;
}