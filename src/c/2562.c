#include <stdio.h>

int main(void) {
    int arr[9], max = 0, cnt;
    
    for(int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        /*division*/
        if(arr[i] > max) {
            max = arr[i];
            cnt = i + 1;
        }
    }
    printf("%d\n%d", max, cnt);

    return 0;
}