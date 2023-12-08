#include <stdio.h>

int main(void) {
    int arr1[6] = { 1, 1, 2, 2, 2, 8 };
    int arr2[6] = { 0, };

    for(int i = 0; i < 6; i++) {
        scanf("%d", &arr2[i]);
        if(arr1[i] == arr2[i])
            printf("%d ", arr1[i] - arr2[i]); // equation
        else if(arr1[i] > arr2[i])
            printf("%d ", arr1[i] - arr2[i]); // shortage
        else if(arr1[i] < arr2[i])
            printf("%d ", arr1[i] - arr2[i]); // surplus
    }

    return 0;
}