#include <stdio.h>

int input(int *num1_ptr, int *num2_ptr, int *num3_ptr)
{
    printf("Enter number 1 to find the largest of 3 numbers: ");
    scanf("%d", num1_ptr);
    printf("Enter number 2 to find the largest of 3 numbers: ");
    scanf("%d", num2_ptr);
    printf("Enter number 3 to find the largest of 3 numbers: ");
    scanf("%d", num3_ptr);    
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
    input(&num1, &num2, &num3);
    max_num=max(num1, num2, num3);
    output(max_num);
    return 0;
}
