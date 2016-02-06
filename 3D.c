#include <stdio.h>
#define P 3
#define R 3
#define C 3

int main() {

	int a[P][R][C];
	int k = 1;

	for (int p = 0; p < P; ++p)
	{
				
		for (int r = 0; r < R; ++r)
		{
			for (int c = 0; c < C; ++c)
			{
				a[p][r][c] = k;
				k++;
			}
		}
	}		


	for (int p = 0; p < P; ++p)
	{
				
		for (int r = 0; r < R; ++r)
		{
			for (int c = 0; c < C; ++c)
			{
				printf("%d ", a[p][r][c]);
			}
			printf("\n");
		}
		printf("\n\n");
	}		

}