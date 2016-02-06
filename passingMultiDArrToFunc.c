// passing multi dimensional array to a function

#include <stdio.h>
#define R 5
#define C 5

void printArr(int arr[][5]) {

	for (int r = 0; r < R; ++r)
	{
		for (int c = 0; c < C; ++c)
		{
			printf("%02d ", arr[r][c]);
		}
		printf("\n");
	}
}

int main() {

	int z = 0;
	int var = 20;
	int *a = NULL;
	// printf("Value of a is: %d", a);
	int myArray[R][C];
	for (int r = 0; r < R; ++r)
	{
		for (int c = 0; c < C; ++c)
		{
			myArray[r][c] = z;
			z++;
		}
	}

	printArr(myArray);
}