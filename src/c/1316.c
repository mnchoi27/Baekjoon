#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    char st[100];
    int N, group_word_count = 0;

    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%s", st);
        int len = strlen(st);
        bool is_group_word = true; // Check if current word is a group word
        bool seen[26] = { 0, }; // Track appearance of alphabet characters

        for(int j = 0; j < len; j++) {
            if(j > 0 && st[j] != st[j - 1] && seen[st[j] - 'a']) {
                is_group_word = false;
                break;
            }
            seen[st[j] - 'a'] = true; // Mark character as seen
        }
        
        if(is_group_word) {
            group_word_count++; // Count group word
        }
    }

    printf("%d\n", group_word_count); // Output count of group words

    return 0;
}