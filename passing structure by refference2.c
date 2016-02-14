#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rectangle {
    struct point leftbot;
    struct point righttop;
};

int area(struct rectangle* temp) {
    int length = (temp->righttop).x - (temp->leftbot).x;
    int bredth = (temp->righttop).y - (temp->leftbot).y;
    int area = length * bredth;
    return area;
}

int main() {

    struct rectangle myRectangle = {{0,0}, {1,1}};
    int Area = area(&myRectangle);
    printf("%d\n", Area);
}