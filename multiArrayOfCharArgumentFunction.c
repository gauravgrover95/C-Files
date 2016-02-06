#include "stdio.h"
#define R 4
#define C 4

void printArray(char array[][C]) {
	for (int r = 0; r < R; ++r)
	{
		for (int c = 0; c < C; ++c)
		{
			printf("%c ", array[r][c]);
		}
		printf("\n");
	}
}

int main() {

	char a[R][C];
	char z = 'a';
	for (int r = 0; r < R; ++r)
	{
		for (int c = 0; c < C; ++c)
		{
			a[r][c] = ' ';
			// z++;
		}
	}

	printArray(a);
}