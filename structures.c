#include "stdio.h"


struct point {
	int x;
	int y;
};

struct point makePoint(int x, int y) {

	struct point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}

int main() {
	struct point pt;
	pt.x = 1;
	pt.y = 2;
	printf("x and y co-ordinates are: %d, %d\n", pt.x, pt.y);
	pt = makePoint(5, 6);
	printf("x and y co-ordinates are: %d, %d\n", pt.x, pt.y);
}