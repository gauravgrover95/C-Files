// this is a better dynamic approach to the spiral question of week2 assignment. this worked but the problem could have been broken further easier
// Approach: We complete row-forward, then targer col-down then row-backward again and so on..
// Observation: When we reach a given operation after completing one iteration. Both final-limit and Initial-limit decreases by one

#include <stdio.h>

int main(void) {

	int n = 1;
	int a, b, r, c;
	scanf("%d%d", &a, &b);
	n = a;
	int counter; // that counts the number of elements in an operations. Not used in this program, because in this program for simple ++z, we can directly count the final limit where we have to break All Operations
	int directionIndicatorX = 2; // even means +, odd means -
	int directionIndicatorY = 2; // even means +, odd means - 
	int ul = n-1; // upper limit
	int ll = 0; // lower limit
	int z = 1;
	int i; // iterator
	int row_plus_initial_limit = ll;
	int row_plus_final_limit = ul;

	int row_minus_initial_limit = ul-1;
	int row_minus_final_limit = ll;

	int col_plus_initial_limit = ll + 1;
	int col_plus_final_limit = ul;

	int col_minus_initial_limit = ul-1;
	int col_minus_final_limit = ll+1;

	int index = 0;
	int k;
	int myArray[n][n];
	int limit = n * n;


	// loop for scanning input

	for (r = 0; r < n; ++r)
	{
		for (c = 0; c < n; ++c)
		{
			scanf("%d", &myArray[r][c]);
		}
	}




	while(z <= limit ){

		// loop for row operations
		if (directionIndicatorX % 2 == 0)
		{
			
			for (i = row_plus_initial_limit; i <= row_plus_final_limit; ++i) // loop for row+ (right)
			{

				printf("%d ", myArray[index][i]);
				z++;
			}
				directionIndicatorX++;
				row_plus_final_limit--;
				row_plus_initial_limit++;
				index = i - 1;

		} else {

			for (i = row_minus_initial_limit; i >= row_minus_final_limit; --i) // loop for row- (left)
			{
				
				printf("%d ", myArray[index][i]);
				z++;
			}
				directionIndicatorX++;
				row_minus_initial_limit--;
				row_minus_final_limit++;
				index = i + 1;
		}



		// Loop For Column operations


		if (directionIndicatorY % 2 == 0)
		{
			for (i = col_plus_initial_limit; i <= col_plus_final_limit; ++i) // loop for col+ (down)
			{
				printf("%d ", myArray[i][index]);
				z++;
			}
				directionIndicatorY++;
				col_plus_final_limit--;
				col_plus_initial_limit++;
				index = i - 1;

		} else {

			for (i = col_minus_initial_limit; i >= col_minus_final_limit; --i) // loop 
			{
				printf("%d ", myArray[i][index]);
				z++;
			}
				directionIndicatorY++;
				col_minus_initial_limit--;
				col_minus_final_limit++;
				index = i + 1;
		}

	}

	return 0;
}