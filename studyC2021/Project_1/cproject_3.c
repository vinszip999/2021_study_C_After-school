#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr1[] = { 9, 20, 28, 18, 11 };
	int arr2[] = { 30, 1, 21, 17, 28 };
	int n = sizeof(arr1) / sizeof(arr1[0]);

	int i, j;
	int row;

	for (i = 0; i < n; i++)
	{
		row = arr1[i] | arr2[i];
		printf("[");
		for (j = n - 1; j >= 0; j--) {
			if (((row >> j) & 1) == 1) {
				printf("#");
			}
			else {
				printf(" ");
			}
		}
		printf("]\n");
	}

	return 0;
}
