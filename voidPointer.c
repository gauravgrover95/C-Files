#include <stdio.h>

int main() {

	int a = 5;
	int b = 10;
	// bool b = false;
	float c = 15;
	void *p;

	p = &a;
	printf("Value of *p is: %d\n", *p);
	p = &b;
	printf("Value of *p is: %d\n", *p);
	p = &a;
	printf("Value of *p is: %.2f\n", *p);
}