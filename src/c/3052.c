#include <stdio.h>

int main(void) {
    int result = 0, arr[10] = { 0, };
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        arr[i] %= 42; // add MOD result array
    }
    /* function that each array is same */
    for(int i = 0; i < 10; i++) {
        int cnt = 0; // repeat, init cnt 0
        for(int j = i + 1; j < 10; j++) {
            if(arr[i] == arr[j])
                cnt++; // same detection
        }
        if(cnt == 0)
            result++; // diff detection
    }
    printf("%d", result);

    return 0;
}