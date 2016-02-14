struct point {
    int x;
    int y;
};

struct rectangle {

    struct point leftbot;
    struct point righttop;
};

// funct to make the point
struct point makePoint(int x, int y) {

} 

// func to calculate distance from origin
float dist(struct point temp) {
    int X = temp.x;
    int Y = temp.y;
    float dista = sqrt(X*X + Y*Y);
    return dista;
}

// function to calculate distance between two points
float distance(struct point a, struct point b) {

    float dista = sqrt((b.y - a.y)*(b.y - a.y) + (b.x - a.x)*(b.x - a.x));
    return dista;
}

// function to calculate area of the rectangle
float areaOfRectangle(struct rectangle temp) {
    int length = temp.righttop.x - temp.leftbot.x;
    // printf("distance betwsdfjbvjkdf: %f\n", length);
    float diagnol = distance(temp.righttop, temp.leftbot);
    float Area = length * sqrt(diagnol*diagnol - length*length);
    return Area;
}
