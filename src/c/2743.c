#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[100]; // notice char type

    scanf("%s", arr);
    printf("%zu", strlen(arr)); // use %zu FOR size_t type

    return 0;
}