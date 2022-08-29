#include<stdio.h>

void input_2_integers_to_be_added(int *num1_ptr, int *num2_ptr)
{
    printf("Enter 1st number to be added: ");
    scanf("%d", num1_ptr);
    printf("Enter 2nd number to be added: ");
    scanf("%d", num2_ptr);
}

int add(int num1, int num2)
{
    return(num1 + num2);
}

void output(int num1, int num2, int sum)
{
    printf("%d+%d=%d", num1, num2, sum);
}

int main()
{
    int num1, num2, sum;
    input_2_integers_to_be_added(&num1, &num2);
    sum=add(num1, num2);
    output(num1, num2, sum);
    return 0;
}
