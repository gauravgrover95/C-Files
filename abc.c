#include <stdio.h>

int main() {

	int n = 19;
	int a, b;
	scanf("%d%d", &a, &b);
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



	// Loop For Row operations

	while(z <= limit ){

		if (directionIndicatorX % 2 == 0)
		{
			
			for (i = row_plus_initial_limit; i <= row_plus_final_limit; ++i) // loop for row+ (right)
			{
				/* code */
				// if(z>=25){break;}
				myArray[index][i] = z;
				z++;
				printf("[%d][%d]: %d \n",index, i, myArray[index][i]);

			}
				directionIndicatorX++;
				row_plus_final_limit--;
				row_plus_initial_limit++;
				index = i - 1;

				// printf("Value of directionIndicatorX, row_plus_final_limit, row_plus_initial_limit, index is: %d, %d, %d, %d", directionIndicatorX, row_plus_final_limit, row_plus_initial_limit, index);

		} else {

			for (i = row_minus_initial_limit; i >= row_minus_final_limit; --i) // loop for row- (left)
			{
				/* code */
				// if(z==25){break;}
				myArray[index][i] = z;
				z++;

				printf("[%d][%d]: %d \n",index, i, myArray[index][i]);
			}
				directionIndicatorX++;
				row_minus_initial_limit--;
				row_minus_final_limit++;
				index = i + 1;

				// printf("Value of directionIndicatorX, row_minus_initial_limit, row_minus_initial_limit, index is: %d, %d, %d, %d", directionIndicatorX, row_minus_initial_limit, row_minus_initial_limit, index);
		}




		// Loop For Column operations


		if (directionIndicatorY % 2 == 0)
		{
				// printf("sjksfrnklrfnkfnkn");
				// printf("%d, %d", col_plus_initial_limit, col_plus_final_limit);
			for (i = col_plus_initial_limit; i <= col_plus_final_limit; ++i) // loop for col+ (down)
			{
				/* code */
				// if(z==25){break;}
				myArray[i][index] = z;
				z++;

				printf("[%d][%d]: %d \n", i, index, myArray[i][index]);
			}
				directionIndicatorY++;
				col_plus_final_limit--;
				col_plus_initial_limit++;
				index = i - 1;

				// printf("Value of directionIndicatorX, col_plus_final_limit, col_plus_initial_limit, index")


		} else {

			for (i = col_minus_initial_limit; i >= col_minus_final_limit; --i) // loop 
			{
				/* code */
				// if(z==25){break;}
				myArray[i][index] = z;
				z++;

				printf("[%d][%d]: %d \n", i, index, myArray[i][index]);

			}
				directionIndicatorY++;
				col_minus_initial_limit--;
				col_minus_final_limit++;
				index = i + 1;
		}

	}

		printf("\n\n");
		int r,c;
		for (r = 0; r < n; ++r)
		{
			for (c = 0; c < n; ++c)
			{
				printf("%8d ", myArray[r][c]);
			}
		}
}