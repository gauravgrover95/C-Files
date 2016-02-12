// This program will give the test cases for the arrays and pointers

#include <stdio.h>

void printArray(int array[][4], int R) {
	int r,c;
	for (r = 0; r < R; ++r)
	{
		for (c = 0; c < 4; ++c)
		{
			printf("3%d ", array[r][c]);
		}
		printf("\n");
	}
}

void assignArray(int arary[][4], int R) {

	int z = 1,r,c;
	for (r = 0; r < R; ++r)
	{
		for (c = 0; c < 4; ++c)
		{
			arary[r][c] = z;
			z++;
		}
	}

}

int main()
{

	int myArray[4][4];

	assignArray(myArray, 4);
	printArray(myArray, 4);

}