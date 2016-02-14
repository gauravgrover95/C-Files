#include <stdio.h>
#include <math.h>
#include "structures.h"


int main() {
    printf("Hello\n");
    struct point pt;
    pt.x = 1;
    pt.y = 1;
    float dista = dist(pt);
    printf("Distance from origin is: %.3f\n", dista);
    struct rectangle myRectangle = {{0, 0}, {1,1}};
    float area = areaOfRectangle(myRectangle);
    printf("\nArea of my rectangle is: %.3f\n", area);
}