#include <stdio.h>
#define R 3
#define C 3

void printArray(int arr[][C]) {

	for (int r = 0; r < R; ++r)
	{
		for (int c = 0; c < C; ++c)
		{
			printf("%d ", arr[r][c]);
		}
		printf("\n");
	}
}

int main() {

	int array[R][C];
	int z = 1;

	for (int r = 0; r < R; ++r)
	{
		for (int c = 0; c < C; ++c)
		{
			array[r][c] = z;
			z++;
		}
	}

	printArray(array);
}