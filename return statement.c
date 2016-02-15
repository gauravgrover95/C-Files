#include <stdio.h>

int returni() {
	int x = 0;
	if(x == 0) {return 0;}
	printf("Hey I am here.. Won't you see me at all?\n"); //Ans: No I wouldn't meet you.. I have already met return statement
	return 1;
	
}

int main() {

	printf("Hello %d\n", returni());
}