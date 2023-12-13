#include <stdio.h>
#include <string.h>

int main(void) {
    char st[101];
    int cnt = 0;

    scanf("%s", st);
    int len = strlen(st); // call func after init
    for(int i = 0; i < len; i++) {
        if(st[i] != st[len - 1])
            cnt++;
        len--;
    }
    if(cnt == 0)
        printf("1"); // if palindrome
    else
        printf("0");

    return 0;
}