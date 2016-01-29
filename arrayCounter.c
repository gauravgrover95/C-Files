#include <stdio.h>
#define count 10

int main() {
	int input = 0;
	int rateCounter[6] = {0,0,0,0,0,0};

	for (int i = 0; i < count; ++i)
	{

		printf("Enter your ratings here: ");
		scanf("%d", &input);

		if(input > 5 || input < 1) {
			printf("Bad Response: %d\n", input);
		}
		else {
			rateCounter[input]++;
		}
	}


	printf("\n\nResult: \n******************************\n\n");
	for (int i = 1; i < 6; ++i)
	{
		printf("Ratings of %d is: %d\n", i, rateCounter[i]);
	}
}