#include <stdio.h>

int main() {

	int n = 4; // dimension
	int ul = n-1;
	int ll = 0;
	int z = 1;
	int arr[n][n];

	int index = ll;
	int i = ll;
	while(i <= ul) {
		scanf("%d", &arr[index][i]);
		i++;
	}


	index = ul;
	i = ll + 1;
	while(i <= ul) {
		scanf("%d", &arr[i][index]);
		i++;
	}
	

	index = ul;
	i = ul - 1;
	while(i >= ll) {
		scanf("%d", &arr[index][i]);
		i--;
	}
	

	index = ll;
	i = ul-1;
	while(i >= (ll + 1) ) { // uparrrrrrr
		scanf("%d", &arr[i][index]);
		i--;
	}
	

	index = ll + 1;
	i = ll + 1;
	while(i <= ul - 1) {
		scanf("%d", &arr[index][i]);
		i++;
	}
	

	index = ul - 1;
	i = ll + 2;
	while(i <= ul - 1) {
		scanf("%d", &arr[i][index]);
		i++;
	}
	

	index = ul - 1;
	i = ul - 2;
	while(i >= ll + 1) {
		scanf("%d", &arr[index][i]);
		i--;
	}







	index = ll;
	i = ll;
	while(i <= ul) {
		printf("%d ",arr[index][i]);
		i++;
	}


	index = ul;
	i = ll + 1;
	while(i <= ul) {
		printf("%d ",arr[i][index]);
		i++;
	}
	

	index = ul;
	i = ul - 1;
	while(i >= ll) {
		printf("%d ",arr[index][i]);
		i--;
	}
	

	index = ll;
	i = ul-1;
	while(i >= (ll + 1) ) { // uparrrrrrr
		printf("%d ",arr[i][index]);
		i--;
	}
	

	index = ll + 1;
	i = ll + 1;
	while(i <= ul - 1) {
		printf("%d ",arr[index][i]);
		i++;
	}
	

	index = ul - 1;
	i = ll + 2;
	while(i <= ul - 1) {
		printf("%d ",arr[i][index]);
		i++;
	}
	

	index = ul - 1;
	i = ul - 2;
	while(i >= ll + 1) {
		printf("%d ",arr[index][i]);
		i--;
	}

}