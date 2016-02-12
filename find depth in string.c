// find the depth of the letters in C program

#include <stdio.h>

int main() {
	int z = 0;
	char a[101];
	scanf("%s", a);
	// printf("dcbdj\n");
	int i = 0;
	while(a[i] != '\0') {
		if(a[i] == 40) { ++z; }
		else if(a[i] == 41) { --z; }
		else {printf("%d ", z);}
		// printf("dvvfv\n");
		i++;
	}

	printf("#");
}