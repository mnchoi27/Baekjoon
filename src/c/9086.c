#include <stdio.h>
#include <string.h>

int main(void) {
    int T;
    char arr[1000];
    
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        scanf("%s", arr);
        printf("%c%c\n", arr[0], arr[strlen(arr) - 1]);
    }
    
    return 0;
}