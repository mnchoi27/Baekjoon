#include <stdio.h>
#include <string.h>

int main(void) {
    int cnt = 0;
    char st[15];
    scanf("%s", st);
    
    for(int i = 0; i < strlen(st); i++) {
        if(st[i] == 'A' || st[i] == 'B' || st[i] == 'C')
            cnt += 3;
        else if(st[i] == 'D' || st[i] == 'E' || st[i] == 'F')
            cnt += 4;
        else if(st[i] == 'G' || st[i] == 'H' || st[i] == 'I')
            cnt += 5;
        else if(st[i] == 'J' || st[i] == 'K' || st[i] == 'L')
            cnt += 6;
        else if(st[i] == 'M' || st[i] == 'N' || st[i] == 'O')
            cnt += 7;
        else if(st[i] == 'P' || st[i] == 'Q' || st[i] == 'R' || st[i] == 'S')
            cnt += 8;
        else if(st[i] == 'T' || st[i] == 'U' || st[i] == 'V')
            cnt += 9;
        else if(st[i] == 'W' || st[i] == 'X' || st[i] == 'Y' || st[i] == 'Z')
            cnt += 10;
    }
    printf("%d", cnt);

    return 0;
}