#include <stdio.h>

int main(void) {
    int arr1[6] = { 1, 1, 2, 2, 2, 8 };
    int arr2[6] = { 0, };

    for(int i = 0; i < 6; i++) {
        scanf("%d", &arr2[i]);
        int diff = arr1[i] - arr2[i];
        if(diff == 0)
            printf("0 "); // equation
        else if(diff > 0)
            printf("%d ", diff); // shortage
        else
            printf("%d ", diff); // surplus
    }

    return 0;
}