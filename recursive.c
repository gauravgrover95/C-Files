#include <stdio.h>

int factorial(int n) {
    int k = 1;
    if(n == 0) { return 1; }
    else {
        k = n * factorial(n - 1);
    }
    return k;
}

int power(int m, int n) {

	int k;
	if(n == 1) { return m; }
	else {
		k = m * power(m, n - 1);
	}
	return k;
}

int main() {
    int k = power(3, 13);
    printf("%d\n", k);
}