#include <stdio.h>
#include <math.h>

int main(void) {
    int N, temp = 2;
    int arr[16] = { 0, };

    scanf("%d", &N);
    for(int i = 0; i < 16; i++) {
        arr[i] = temp * temp;
        temp += pow(2, i);
        // increase points for next step
    }
    printf("%d", arr[N]);

    return 0;
}