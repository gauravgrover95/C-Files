#include <stdio.h>

int cmp(int arr1[], int arr2[]) {

	int k = 1,i;
	for(i = 0; i < 129; i++) {

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

	for(i = 0; i < 129; i++) {
		counter1[i] = 0;
	}

	for(i = 0; i < 129; i++) {
		counter2[i] = 0;
	}

	

	for(i = 0; i < 101; i++) {
		k = str1[i];
		counter1[k]++;
	}



	for(i = 0; i < 101; i++) {
		k = str2[i];
		counter2[k]++;
	}

	



	for(i = 0; i < 129; i++) {
		printf("%d",counter1[i]);
	}

	printf("\n");

	for(i = 0; i < 129; i++) {
		printf("%d",counter2[i]);
	}















	if (cmp(counter1, counter2))
	{
		printf("yes");
	} else {
		printf("no");
	}
}