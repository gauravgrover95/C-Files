#include <stdio.h>
#include <string.h>

void swap(char *n, char *m) {
    char temp;
    temp = *n;
    *n = *m;
    *m = temp;
}

void reverse(char* string) {
    int length = strlen(string);
    int i = 0;
    for(i = 0; i < length/2; i++) {
        swap(&string[i], &string[length - i - 1]);
    }
}   

int main() {

    char name[] = "Gaurav Grover";
    reverse(name);
    printf("%s\n", name);
}