#include <stdio.h>

void input_number(int *num_ptr, int ith_num)
{
    printf("Enter number %d to find the largest of 3 numbers: ", ith_num);
    scanf("%d", num_ptr);
}

int max(int num1, int num2, int num3)
{
    if(num1>num2 && num1>num3)
        return num1;
    else if(num2>num3)
        return num2;
    else
        return num3;
}

void output(int max_num)
{
    printf("The largest number is %d.\n", max_num);
}

int main()
{
    int num1, num2, num3, max_num;
    input_number(&num1, 1);
    input_number(&num2, 2);
    input_number(&num3, 3);
    max_num = max(num1, num2, num3);
    output(max_num);
    return 0;
}
