// program to find if two strings are permutations of each other

#include <stdio.h>

int cmp(int arr1[], int arr2[]) {

	int k = 1; // 
	int i;
	for(i = 0; i < 128; i++) {

		if(arr1[i] != arr2[i]) {
			k = 0;
		}
	}
	return k;
}

int main() {

	int i = 0, k = 0;
	char str1[101];
	char str2[101];

	scanf("%s%s", str1, str2);

	int counter1[129];
	int counter2[129];

	for(i = 0; i < 128; i++) {
		counter1[i] = 0;
		// printf("%d ", counter1[i]);
	}

	printf("\n");

	for(i = 0; i < 128; i++) {
		counter2[i] = 0;
		// printf("%d ", counter2[i]);		
	}






	i = 0;
	while(str1[i] != '\0') {
		k = str1[i];
		counter1[k]++;
		i++;
	}

	i = 0;
	while(str2[i] != '\0') {
		k = str2[i];
		counter2[k]++;
		i++;
	}


	printf("\n");	
	printf("\n");	



	// for(i = 0; i < 128; i++) {
	// 	// counter1[i] = 0;
	// 	printf("%d ", counter1[i]);
	// }

	// printf("\n");

	// for(i = 0; i < 128; i++) {
	// 	// counter2[i] = 0;
	// 	printf("%d ", counter2[i]);		
	// }


	if(cmp(counter1, counter2)){ printf("yes"); }
	else { printf("no"); }

}