#include<stdio.h>
#include<math.h>

int input_num()
{   
    int num;
    printf("Enter a number to find its square root: ");
    scanf("%d", &num);
    return num;
}

int square_root(int num)
{
    return(sqrt(num));
}    

void output_root(int num, int sq_root_of_num)
{
    printf("Square root of %d is %d", num, sq_root_of_num);
}

int main()
{
    int num, sq_root_of_num;
    num=input_num();
    sq_root_of_num=square_root(num);
    output_root(num, sq_root_of_num);
    return 0;
}
