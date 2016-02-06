#include <stdio.h>

void swap(int *n, int *m) {
	int temp;
	temp = *n;
	*n = *m;
	*m = temp;
}

int main() {

	int n, m;
	scanf("%d%d", &n, &m);
	swap(&n, &m);
	printf("value of n and m are: %d, %d", n, m);

}