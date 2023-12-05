#include <stdio.h>

int main(void) {
    int N, M = 0;
    int arr[1000] = { 0, };
    double avg, sum = 0;

    scanf("%d", &N);
    for(int i = 0; i < N; i++) { // input score
        scanf("%d", &arr[i]);
        if (arr[i] > M) // discrimination max
            M = arr[i];
    }

    for(int i = 0; i < N; i++) {
        sum += (double)arr[i]; // stack array
    }
    avg = (sum / M) * 100 / N;
    printf("%lf\n", avg); // output average

    return 0;
}