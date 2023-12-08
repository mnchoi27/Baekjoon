#include <stdio.h>
#include <string.h>

int main(void) {
    char st[100];
    char al[26];

    scanf("%s", st);
    for (int i = 0; i < 26; i++)
	    al[i] = -1; // init al -1
    /* INDEX al */
    for(int i = 97; i <= 122; i++) {
        for(int j = 0; j < strlen(st); j++) {
            if(st[j] == i) { // discrimination st AND al
                al[st[j] - 'a'] = j; // input al TO count
                break;
            }
        }
    }
    for(int i = 0; i < 26; i++)
        printf("%d ", al[i]); //output al
    
    return 0;
}