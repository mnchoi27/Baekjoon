#include <stdio.h>
#include <string.h>

int main(void) {
    char *al[] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    char st[100];
    int cnt = 0, found;

    scanf("%s", st);
    int st_len = strlen(st);
    for(int i = 0; i < st_len; i++) {
        found = 0; // assume no special croatian al found
        // check for croatian al
        for(int j = 0; j < 8; j++) {
            int al_len = strlen(al[j]);
            if(strncmp(&st[i], al[j], al_len) == 0) {
                cnt++;
                i += al_len - 1; // skip index by the length of the al
                found = 1;
                break;
            }
        }
        // if no special al found, count as a regular al
        if(!found) {
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}