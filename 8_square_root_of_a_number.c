#include<stdio.h>
#include<math.h>

int input_num()
{   
    int num;
    printf("Enter a number to find its square root: ");
    scanf("%d", &num);
    return num;
}

float square_root(int num)
{
    return(sqrt(num));
}    

void output_square_root_of_num(int num, float sq_root_of_num)
{
    printf("Square root of %d is %f", num, sq_root_of_num);
}

int main()
{
    int num=input_num();
    float sq_root_of_num=square_root(num);
    output_square_root_of_num(num, sq_root_of_num);
    return 0;
}
