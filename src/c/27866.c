#include <stdio.h>

int main(void) {
    int i;
    char arr[1000] = { 0, }; // data type

    scanf("%s", arr); // don't mind element count
    scanf("%d", &i);
    printf("%c", arr[i - 1]);

    return 0;
}