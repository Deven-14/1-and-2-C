#include<stdio.h>
#include<math.h>

int input_x_co_ordinate_of_ith_point(int ith_point)
{
    int x;
    printf("Enter the x co-ordinate of the point %d: ", ith_point);
    scanf("%d", &x);
    return x;
}

int input_y_co_ordinate_of_ith_point(int ith_point)
{
    int y;
    printf("Enter the y co-ordinate of the point %d: ", ith_point);
    scanf("%d", &y);
    return y;
}

float distance_formula(int x1, int y1, int x2, int y2)
{
    return(sqrt(pow((x2-x1), 2)+pow((y2-y1), 2)))
}

void output(float distance)
{
    printf("Distance between the points is %f\n", distance);    
}    

int main()
{
    int x1= input_x_co_ordinate_of_ith_point(1);
    int y1= input_y_co_ordinate_of_ith_point(1);
    int x2= input_x_co_ordinate_of_ith_point(2);
    int y2= input_y_co_ordinate_of_ith_point(2);
    float distance= distance_formula(x1, y1, x2, y2);
    output(distance);
    return 0;
}
