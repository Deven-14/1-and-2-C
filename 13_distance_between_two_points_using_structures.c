#include<stdio.h>
#include<math.h>

struct point
{
    int x, y;
};

typedef struct point Point;

Point input_co_cordinates_of_ith_point(int ith_point)
{
    Point p;
    printf("Enter the x co-ordinate of the point %d: ", ith_point);
    scanf("%d", &p.x);
    printf("Enter the y co-ordinate of the point %d: ", ith_point);
    scanf("%d", &p.y);
    return p;
}

float distance_formula(Point p1, Point p2)
{
    return(sqrt(pow((p2.x-p1.x), 2)+pow((p2.y-p1.y), 2)));
}

void output(float distance, Point p1, Point p2)
{
    printf("The distance between the points (%d, %d) and (%d, %d) is %f\n", p1.x, p1.y, p2.x, p2.y, distance);
}

int main()
{
    Point p1= input_co_cordinates_of_ith_point(1);
    Point p2= input_co_cordinates_of_ith_point(2);
    float distance = distance_formula(p1, p2);
    output(distance, p1, p2);
    return 0;
}
