#include <stdio.h>

int main(void) {
    int n, arr[30] = { 0, };
    
    for(int i = 0; i < 28; i++) {
        scanf("%d", &n); // input n
        arr[n - 1]++; // index increase
    }
    for(int j = 0; j < 30; j++) {
        if(arr[j] == 0) // index output
            printf("%d\n", j + 1);
    }
    
    return 0;
}