// one point to make is that value of arrays is always passed by refference.

#include <stdio.h>
#define C 10

void printArr1(int *arr) {

	for (int c = 0; c < C; ++c)
	{
		printf("%d ", arr[c]);
	}
	arr[3] = 234;
}

void printArr2(int arr[5]) {

	for (int c = 0; c < C; ++c)
	{
		printf("%d ", arr[c]);
	}

}

void printArr3(int arr[]) {

	for (int c = 0; c < 12; ++c)
	{
		printf("%d ", arr[c]);
	}

}


int main() {

	int z = 1;
	int var = 20;
	int *a = NULL;
	// printf("Value of a is: %d", a);
	int myArray[C];
	for (int c = 0; c < C; ++c)
	{
		myArray[c] = z;
		z++;
	}

	printf("This is my first print: \n");
	printArr1(myArray);
	printf("\n\nNow presenting the second print:\n");
	printArr2(myArray);
	printf("\n\nNow presenting the third print:\n");
	printArr3(myArray);
	printf("\n\n");
	printf("Value of myArray[3] is: %d", myArray[3]);
}