#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    if(N % 4 == 0) { // execute only multiple of 4
        for(int i = 0; i < (N / 4); i++) printf("long ");
    }        
        else // exception handling end
            return 0;
    printf("int");
    
    return 0;
}