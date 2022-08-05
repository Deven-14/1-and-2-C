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

void output(float distance)
{
    printf("The distance between the entered points is %f\n", distance);
}

int main()
{
    Point p1= input_co_cordinates_of_ith_point(1);
    Point p2= input_co_cordinates_of_ith_point(2);
    float distance = distance_formula(p1, p2);
    output(distance);
    return 0;
}
