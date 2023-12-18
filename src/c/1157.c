#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MILLION 1000000

int main(void) {
    char st[MILLION];
    int cnt[26] = { 0, };

    scanf("%s", st);
    int len = strlen(st);
    /* Counting frequencies while convert toupper */
    for(int i = 0; i < len; i++) {
        char ch = toupper(st[i]);
        cnt[ch - 'A']++;
    }
    int max_frequency = 0;
    char result = '?';
    // find max_frequency
    for(int i = 0; i < 26; i++) {
        if(cnt[i] > max_frequency) {
            max_frequency = cnt[i];
            result = 'A' + i;
        }
        else if(cnt[i] == max_frequency) {
            result = '?';
        }
    }
    printf("%c\n", result);
    
    return 0;
}