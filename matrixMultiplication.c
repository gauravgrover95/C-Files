#include "stdio.h"
#define R1 3
#define J 2
#define C2 4


int main() {

	int a[R1][J];
	int b[J][C2];
	int R[R1][C2];
	int z = 1;
{
	for (int x = 0; x < R1; ++x)
	{
		for (int y = 0; y < J; ++y)
		{
			a[x][y] = z;
			z++;
		}
	}

	for (int x = 0; x < R1; ++x)
	{
		for (int y = 0; y < J; ++y)
		{
			printf("%d ", a[x][y]);
		}
		printf("\n");
	}

	printf("\n");
	z = 1;
	for (int x = 0; x < J; ++x)
	{
		for (int y = 0; y < C2; ++y)
		{
			b[x][y] = z;
			z++;
		}
	}

	for (int x = 0; x < J; ++x)
	{
		for (int y = 0; y < C2; ++y)
		{
			printf("%d ", b[x][y]);
		}
		printf("\n");
	}

	printf("\n");
}

// ********************************************************************
	for (int x = 0; x < R1; ++x)
	{
		for (int y = 0; y < C2; ++y)
		{
			R[x][y] = 0; 
			for(int k = 0; k < J; ++k) {
				R[x][y] = R[x][y] + (a[x][k] * b[k][y]);
			}
		}
	}

	for (int x = 0; x < R1; ++x)
	{
		for (int y = 0; y < C2; ++y)
		{
			printf("%d ", R[x][y]);
		}
		printf("\n");
	}
}