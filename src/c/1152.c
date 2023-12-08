#include <stdio.h>
#include <string.h>

int main(void) {
    int cnt = 0;
    char sp = ' ';
    char st[1000000];

    scanf("%[^\n]", st); // include sp
    for(int i = 0; i < strlen(st); i++) {
        if(st[i] == sp)
            cnt++; // count word
    }
    if(st[0] == sp)
        cnt--;
    if(st[strlen(st) - 1] == sp)
        cnt--;
    printf("%d", cnt + 1);

    return 0;
}