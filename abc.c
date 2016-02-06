#include <stdio.h>

int cmp(int arr1[], int arr2[]) {

	int k = 1,i;
	for(i = 0; i < 5; i++) {

		if(arr1[i] != arr2[i]) {
			k = 0;
		}
	}
	return k;
}

int main() {
	// printf("Hello World");
	int arr1[5] = {1,1,1,1,1}, 
	arr2[5] = {1,1,1,1,1};

	if(cmp(arr1, arr2)) printf("yes they are equal\n");
	else printf("No they are not\n");
}