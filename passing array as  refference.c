#include <stdio.h>

void printArray(int *array, int size) {

    int i;
    for (i = 0; i < size; ++i)
    {
        printf("%d\n", array[i]);
    }
}

int main() {
    int arr[] = {1,12312,3,4,5,6,7,8,9};
    int length = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, length);
}