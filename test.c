#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	int a[n];
	int i, j;
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	int sum = 0;
	int max = a[0];
	int il = 1; // il = iterator limit

	while(il < n) {
		j = 0;
		while(j < ( n - il + 1)) {
			i = j;
			while(i < il) {
				sum = sum + a[i];
				++i;
			}

			if(sum > max) { max = sum; }

			++j;
		}
		++il;
	}

	printf("%d\n", sum);

}