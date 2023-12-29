#include <stdio.h>

int main(void) {
	// initialize 100 by 100 matrix
	int arr[100][100] = { 0, };
	int n, x, y, cnt = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		// transpose the matrix by swapping x and y
		for (int j = y; j < y + 10; j++)
			for (int k = x; k < x + 10; k++)
				arr[j][k] = 1; // mark the area on the arr
	}
	for (int j = 0; j < 100; j++) {
		for (int k = 0; k < 100; k++)
			if (arr[j][k] == 1)
				cnt++; // count the area
	}
	printf("%d",cnt);

	return 0;
}