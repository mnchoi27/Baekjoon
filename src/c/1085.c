#include <stdio.h>

int main(void) {
    int x, y, w, h;
    
    scanf("%d %d %d %d", &x, &y, &w, &h);
    // calculate the distances to each edge
    int dl = x;
    int dr = w - x;
    int db = y;
    int dt = h - y;
    // calculate the minimum distance
    int md = dl; // initially set md to dl
    if(dr < md)
        md = dr;
    if(db < md)
        md = db;
    if(dt < md)
        md = dt;
    printf("%d\n", md);

    return 0;
}