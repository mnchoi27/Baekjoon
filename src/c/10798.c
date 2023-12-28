#include <stdio.h>
#include <string.h>

int main(void) {
    char st[5][15];
    int max_len = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%s", st[i]);
        // update len of longest st
        int len = strlen(st[i]);
        if(len > max_len)
            max_len = len;
    }
    // reading vertical from matrix
    for(int i = 0; i < max_len; i++) { // for each column
        for(int j = 0; j < 5; j++)
            // check if char exists in current column
            if(i < strlen(st[j]))
                printf("%c", st[j][i]);
    }

    return 0;
}