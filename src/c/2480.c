#include <stdio.h>

int main(void) {
    int d1, d2, d3;
    scanf("%d %d %d", &d1, &d2, &d3);

    if(d1 == d2 && d2 == d3)
        printf("%d\n", 10000 + d1 * 1000);
    else if(d1 == d2) // d2 != d3
        printf("%d\n", 1000 + d1 * 100);
    else if(d2 == d3) // d1 != d2
        printf("%d\n", 1000 + d2 * 100);
    else if(d1 == d3) // d1 != d2, d2 != d3
        printf("%d\n", 1000 + d1 * 100);
    
    /*d1 != d2 != d3*/
    else if(d1 > d2 && d1 > d3) // max d1
        printf("%d\n", d1 * 100);
    else if(d2 > d3) // not max d1, max d2
        printf("%d\n", d2 * 100);
    else // not max d1 d2, max d3
        printf("%d\n", d3 * 100);

    return 0;
}